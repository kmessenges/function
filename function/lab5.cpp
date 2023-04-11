#include <iostream> 
using namespace std;
void multx(int n, int* ii) { return multx(n, ii, 5); }
void multx(int n, int* ii, int x) {
	for (int i = 0; i < n; i++) ii[i] = i * x;
}
int main() {
	int a[10];
	multx(6, a);
	multx(4, a + 6, 10);
	return 1;
}