/*
Multiplication table (1-9)
Use two "for" statement to nested loop.
The product is left aligned to make the table looks better.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j;
	for(i = 1; i<=9; i++) {
		for(j = 1; j<=i; j++) {
			cout.flags(ios::left);	//left justifying
			cout << j << "x" << i << "="
				<< setw(2) << j*i << "   ";
		}
		cout << endl;
	}
	cout << endl; 
	system("pause");
	return 0;
}
