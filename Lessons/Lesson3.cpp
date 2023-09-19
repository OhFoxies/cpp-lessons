#include<iostream>
using namespace std;

int main() {
	int liczba;
	cout << "Podaj liczbe ";
	cin >> liczba;
	
	if (liczba % 2 == 0) {
		cout << liczba << " jest parzysta" << endl;
		return 0;
	}
	
	cout << liczba << " jest nieprzaysta" << endl;
	return 0;
}	
