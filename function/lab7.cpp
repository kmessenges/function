#include <iostream>
using namespace std;
void g2kg(int, float*, float*);
void kg2g(int, float*, float*);
void main() {
	float g[] = { 20.0,30.,100. }, kg[3];
	g2kg(3, g, kg);
	kg[0] = 40.0;
	kg[1] = 70.0;
	kg[2] = 95.0;
	
	kg2g(3, kg, g);
}
void GKGout(int n, float* G, float* KG) {
	cout << "   G  " << "    KG  " << endl;
	for (int i = 0; i < n; i++)
		cout << "   " << G[i] << "   " << KG[i] << endl;
	
}
void g2kg(int n, float* G, float* KG) {
	for (int i = 0; i < n; i++) KG[i] = G[i] /1000 ;
	GKGout(n, G, KG);
}
void kg2g(int n, float* KG, float* G) {
	for (int i = 0; i < n; i++) G[i] = KG[i] * 1000;
	GKGout(n, G, KG);
}