#include<iostream>
using namespace std;

int main() {
	int x;
	cout << "Podaj liczbe x" << endl;
	cout << ">>> ";
	cin >> x;
	bool any = false;
	for (int i = 2; i <= x; i+=2) {
		if (x%i == 0) {
			any = true;
			cout << i << ", ";
		}
	}
	if (!any) {
		cout << "brak";
	}
	return 0;
}	

