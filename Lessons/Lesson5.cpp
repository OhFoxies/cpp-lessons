#include<iostream>
using namespace std;

int main() {
	float o1, o2, o3;
	cout << "podaj 3 oceny: " << endl;
	cin >> o1;
	cin >> o2;
	cin >> o3;
	float srednia;
	srednia = (o1+o2+o3) / 3;
	cout << "Srednia to: " << srednia << endl;
	if (srednia >= 5.75 && srednia <= 6) {
		cout << "Ocena celujacy";
	}
	else if (srednia < 5.75 && srednia >= 4.75) {
		cout << "Ocena bardzo dobry";
	}
	else if (srednia < 4.75 && srednia >= 3.75) {
		cout << "Ocena dobry";
	}
	else if (srednia < 3.75 && srednia >= 2.75) {
		cout << "Ocena dostateczny";
	}
	else if (srednia < 2.75 && srednia >= 1.75) {
		cout << "Ocena dop";
	}
	else if (srednia < 1.75) {
		cout << "Ocena ndst";
	}
	return 0;
}	

