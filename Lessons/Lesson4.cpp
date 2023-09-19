#include<iostream>
using namespace std;

int main() {
	int dzien;
	cout << "podaj liczbe od 1 do 7: ";
	cin >> dzien;

	if (dzien == 1) {
		cout << "Poniedziałek";
	}
	else if (dzien == 2) {
		cout << "Wtorek";
	}
	else if (dzien == 3) {
		cout << "sroda";
	}
	else if (dzien == 4) {
		cout << "czwartek";
	}
	else if (dzien == 5) {
		cout << "piatek";
	}
	else if (dzien == 6) {
		cout << "sobota";
	}
	else if (dzien == 7) {
		cout << "niedziela";
	}
	else {
		cout << "Co?";
	}
}	
