#include <iostream>
using namespace std;

int sum(int n) {
	int result = 0;
	for (int i = 0; i < n+1; i++) {
		result += i;
	}
	return result;
}

int main() {
	cout << sum(10) << "\n";
	cout << sum(4) << "\n";
	cout << sum(3) << "\n";
	return 0;
}