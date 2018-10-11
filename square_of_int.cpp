#include <iostream>
using namespace std;

int fun2(int m) {
	return m * m;
}

int fun1(int x, int y) {
	return fun2(x) + fun2(y);
}

int main() {
	
	int a, b;
	cout << "Please enter two integers (a and b):";
	cin >> a >> b;
	cout << "\nThe sum of square of a and b:"
		<< fun1(a, b)
		<< "\n" <<endl;
	
	system("pause");
	return 0;
}
