#include <iostream>
using namespace std;

/*Calculate the sum of squares of two integers*/

int SquareSum(int x, int y) {
	return x*x + y*y;
}

int main() {
	
	int a, b;
	cout << "Please enter two integers (a and b):";
	cin >> a >> b;
	cout << "\nThe sum of square of a and b:"
		<< SquareSum(a, b) << "\n" <<endl;

	system("pause");
	return 0;
}
