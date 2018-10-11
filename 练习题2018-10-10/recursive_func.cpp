#include <iostream>
using namespace std;

/*
Unsigned intrger:It can be understood as an 
integer greater than or equal to zero.
*/ 

unsigned fac(int n) {
	unsigned f;
	if (n == 0)		
		f = 1;		
	else
		f = fac(n - 1)*n;	//Call the function itself, forming a loop
	return f;
}

int main() {
	unsigned n;
	cout << "Enter a positive integer: ";
	cin >> n;
	unsigned y = fac(n);
	cout << endl << n << "!=" << y << endl
		<< endl;
	system("pause");
	return 0;
}
