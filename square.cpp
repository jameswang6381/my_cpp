#include <iostream>
using namespace std;

//x to the power n
double power(double x, int n)
{
	double val = 1.0;
	while (n--) val *= x;

	return val;
}

int main() {
	
	cout << "5 to the power 2 is "
		<< power(5, 2) << "\n" <<endl;
		
	system("pause");
	return 0;
}
