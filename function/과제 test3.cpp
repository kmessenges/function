#include <fstream>
#include <iostream>

using namespace std;

// 구조체 선언
struct Data {
    int v1;
    int v2[5];
    float v3[3];
};

// int 1234 입력
void m0(int* v1) {
    *v1 = 1234;
}

// int 1000부터 5000까지 숫자에 5를 곱한 수 5개 쓰기
void m1(int* v2) {
    for (int i = 1000; i <= 5000; i += 1000) {
        int a = (i - 1000) / 1000;
        v2[a] = i * 5;
    }
}

// float -0.5에서 0.5씩 증가하면서 자승을 한 수 3개 쓰기
void m2(float* v3) {
    for (int a = 0; a < 3; a++) {
        float f = -0.5 + 0.5 * a;
        v3[a] = f * f;
    }
}

int main() {
    Data data;

    m0(&data.v1);
    m1(data.v2);
    m2(data.v3);

    // 파일 열기
    ofstream outfile("mybin방법3.dat", ios::out | ios::binary);
    if (!outfile) {
        cout << "no file : " << endl;
        return 0;
    }

    // 값 쓰기
    outfile.write((char*)&data, sizeof(data));

    // 파일 닫기
    outfile.close();

    // 파일 열기
    ifstream infile("mybin방법3.dat", ios::binary | ios::in);
    infile.read((char*)&data, sizeof(data));

    // 파일 닫기
    infile.close();
    cout << "파일 생성 완료" << endl;

    return 0;
}