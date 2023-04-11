#include <iostream>
using namespace std;
int fn(int);
void main() {
	int i = 5, a;
	a = fn(	i);
	cout << " i = " << i << endl;
	cout << " a = " << a << endl;
	
}
int fn(int ii) { return ii * 100; }

	