#include <iostream>
#define PHI 3.14 

using namespace std;
int main () {
	float jari_jari, luas;
	jari_jari = 25;
	
	luas = 0.5 * PHI * jari_jari * jari_jari;
	cout << "------------LATIHAN 2---------"<< endl;
	cout <<endl;
	cout << "data lingkaran"<< endl;
	cout << "berapa luas lingkaran jika" << endl;
	cout << "jari - jari = "<< jari_jari << endl;
	cout<<endl;
	cout << "luas = " << luas << endl;

	cin.get();
	return 0;
}