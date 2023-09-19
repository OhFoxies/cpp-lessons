#include<iostream>
using namespace std;

int main() {
	for(int i = 2; i<=10; i++) {
		cout << i << endl;
	}
	int i = 2;
	while (i<=10) {
		cout << i << endl;
		i++;
	}
	
	int j = 2;
	do{
		cout << j << endl;
		j++;	
	}while(j<=30);
	
	cout << endl;
//	generowanie liczb od y do x podzielnych przez z;
	int x;
	int y;
	int z; 
	cout << endl << "Podaj y: ";
	cin >> y;
	cout <<  endl << "Podaj x: ";
	cin >> x;
	cout <<  endl << "Podaj dzielnik: ";
	cin >> z;
	cout << endl;
	
	for(int k=y; k<=x; k++) {
		if (k%z == 0) {
			cout << k << endl;
		}
	}

	return 0;
}

