#include<iostream>
using namespace std;

int main() {
	int x, y;
	cout << "Podaj liczbe x" << endl;
	cout << ">>> ";
	cin >> x;
	cout << endl << "Podaj liczb y" << endl;
	cout << ">>> ";
	cin >> y;
	
	if ((y+x) % 5 == 0 || (y+x) % 6 == 0) {
		cout << endl << "Tak";
	}
	else {
		cout << endl << "Nie";	
	}
	return 0;
}	

