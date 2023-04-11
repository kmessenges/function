#include <fstream>
#include <iostream>

using namespace std;

int m1(int a) {return a*5;}
float m2(float b) { return b * b; }
int main() {
    // 파일 열기
    ofstream outfile("mybin방법1.dat", ios::out | ios::binary);

    // int 1234 쓰기
    int num1 = 1234;
    outfile.write((char*)&num1, sizeof(num1));

    // int 1000부터 5000까지 숫자에 5를 곱한 수 5개 쓰기
    for (int i = 1000; i <= 5000; i += 1000) {
        int num2 = m1(i);
        outfile.write((char*)&num2, sizeof(num2));
    }

    // float -0.5에서 0.5씩 증가하면서 자승을 한 수 3개 쓰기
    for (float f = -0.5; f <= 0.5; f += 0.5) {
        float num3 = m2(f);
        outfile.write((char*)&num3, sizeof(num3));
    }

    // 파일 닫기
    outfile.close();

    return 0;
}