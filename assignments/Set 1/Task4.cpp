#include<iostream>
using namespace std;

int main() {
 // Wprowadzamy do konsoli int e, f. 
 // Program obliczna sume liczbe podzielnych prez 3 z przedzialu [e; f]
 // e=2, f=7 -> 9 (Przedzial [2; 7] liczby podzielne przez 3 = 3, 6. Suma = 9
 	int sum = 0;
	int e, f;
	cout << "Podaj liczbe e" << endl;
	cout << ">>> ";
	cin >> e;
	cout << endl << "Podaj liczbe f" << endl;
	cout << ">>> ";
	cin >> f;
	for(int k=e;k<=f;k++){
		if(k%3==0){
			sum=sum+k;
		}
	}
	cout << "Suma liczb od " << e << " do " << f << " podzielnych przez 3 to " << sum;
}	
