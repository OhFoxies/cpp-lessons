#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Podaj liczbe a" << endl;
	cout << ">>> ";
	cin >> a;
	cout << endl << "Podaj liczbe b" << endl;
	cout << ">>> ";
	cin >> b;
	cout << endl << "Podaj liczbe c" << endl;
	cout << ">>> ";
	cin >> c;
	cout << "Liczby od 3a do 4b+2 podzielne przez c+1 to:" << endl;
	for(int k=(3*a+1);k<=(4*b+2);k++){
		if(k%(c+1)==0){
			cout << k << ", ";
		}
	}
	return 0;
}	

