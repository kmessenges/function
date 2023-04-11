#include <iostream>
using namespace std;

void PrintMe(int ii) {
    cout << "  I am " << ii << "  years old.\n";
}

void PrintMe(float xx) {
    cout << "  I am " << xx << "  cm tall.\n";
}

void PrintMe(float yy) {
    cout << " I am " << yy << "kg.\n";
}

void PrintMe(int ii, float xx, float yy) {
    PrintMe(ii);
    PrintMe(xx);
    PrintMe(yy);
}

int main() {
    float height = 186.0;
    int age = 25;
    float weight = 93;
    PrintMe(age);
    PrintMe(height);
    PrintMe(weight);
    PrintMe(age, height, weight);
    return 0;
    getchar();
}