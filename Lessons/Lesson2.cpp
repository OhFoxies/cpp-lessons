#include<iostream>
using namespace std;

int main() {
	int dzien;
	cout << "podaj liczbe od 1 do 7: ";
	cin >> dzien;
	
	switch(dzien) {
		case 1:
			cout << "Poniedzialek";
			break;
		case 2:
			cout << "wtorek";
			break;
		case 3:
			cout << "sroda";
			break;
		case 4:
			cout << "czwartek";
			break;
		case 5:
			cout << "piatek";
			break;
		case 6:
			cout << "sobota";
			break;
		case 7:
			cout << "niedziela";
			break;			
		default:
			cout << "Nie znane";
			break;					
	}
	return 0;
}	
