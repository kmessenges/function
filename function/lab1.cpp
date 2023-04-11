#include <iostream>
using namespace std;
float faren2cel(float f) {
	return (f - 32) /9.0 * 5.0;
}
int main() {
	float cel, faren;
	faren = 100.0;
	cel = faren2cel(faren);
	cout << "cel=" << cel << endl;
	return 1;

}