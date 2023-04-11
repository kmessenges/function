#include <iostream>
using namespace std;
void cel2faren(int, float*, float*);
int main() { // 반환값이 있는 main 함수로 수정
    float cel[] = { 20, 30, 100 }, faren[3];
    cel2faren(3, cel, faren);
    for (int i = 0; i < 3; i++) {
        cout << faren[i] << endl; // 변환된 화씨 온도 출력
    }
    return 0; // 반환값 0을 리턴
}
void cel2faren(int n, float* cc, float* ff) {
    for (int i = 0; i < n; i++) {
        ff[i] = cc[i] * 9.0 / 5.0 + 32;
    }
    return; // 생략 가능
}