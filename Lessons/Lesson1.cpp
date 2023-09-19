#include<iostream>
using namespace std;

int main() {

//	zmienna ca³kowita 
	int variable = 2;


//	 funkcjka sizeof() zwraca iloœc pomiêci zajmowanej przez dan¹ zmienna w bitach

	cout << "zmienna typu ca³kowitego zajmuje: " << sizeof(variable) << "B" << endl;
	cout << "zmienna wzium: " << variable << endl << endl;


//	zmienna ca³kowita dodatnia 
	unsigned int z2=1;
	cout << "zmienna typu ca³kowitego zajmuje: " << sizeof(z2) << "B" << endl;
	cout << "zmienna wzium: " << z2 << endl << endl;


// zmienna ca³kowita d³uga 
	long long int z3=1;
	cout << "zmienna typu ca³kowitego zajmuje: " << sizeof(z3) << "B" << endl;
	cout << "zmienna wzium: " << z3 << endl << endl;	

 	bool z4=true;
	cout << "zmienna typu bool zajmuje: " << sizeof(z4) << "B" << endl;
	cout << "zmienna wzium: " << z4 << endl << endl;
	
//	zmienna rzeczywista  krotka
	float z5=1.1234567890;
	cout << "zmienna typu float zajmuje: " << sizeof(z5) << "B" << endl;
	cout << "zmienna wzium: " << z5 << endl << endl;
	
//	zmienna rzeczywista  d³uga
	double z6=1.1234567890;
	cout << "zmienna typu double zajmuje: " << sizeof(z6) << "B" << endl;
	cout << "zmienna wzium: " << z6 << endl << endl;
		//	zmienna rzeczywista  krotka
//	zmienna znakowa
	char z7='a';
	cout << "zmienna typu char zajmuje: " << sizeof(z7) << "B" << endl;
	cout << "zmienna wzium: " << z7 << endl << endl;	
	
//	ci¹g znaków
	string z8= "adsfsdfsf";
	cout << "zmienna typu string zajmuje: " << sizeof(z8) << "B" << endl;
	cout << "zmienna wzium: " << z8 << endl << endl;	
	return 0;
}	
