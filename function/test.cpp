#include<iostream>
using namespace std;
void fn(int x) {
	float y;
	y = x * x + 5;
	y = sqrt(y) + x;
	
	cout << y << endl;

}
int main() {
	for (int i = 10; i < 50; i += 10) fn(i);
	return 1;

}