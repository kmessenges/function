#include <fstream>
#include <iostream>

using namespace std;


int main() {
    // int 1234 쓰기
    int num1 = 1234;
    // int 1000부터 5000까지 숫자에 5를 곱한 수 5개 쓰기
    for (int i = 1000; i <= 5000; i += 5) {
        int num2 = i * 5;
    }
    // float -0.5에서 0.5씩 증가하면서 자승을 한 수 3개 쓰기
    for (float f = -0.5f; f <= 0.5f; f += 0.5f) {
        float num3 = f * f;   
    }
    ofstream outfile("mybin.dat", ios::out | ios::binary);
    outfile.write((char*)&num1, sizeof(num1));
    outfile.write((char*)&num2, sizeof(num2));
    outfile.write((char*)&num3, sizeof(num3));

    // 파일 닫기
    outfile.close();
    return 0;
}