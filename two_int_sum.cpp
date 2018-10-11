#include<iostream>
//using namespace std;
int main()
{
	int number1 = 0;
	int number2 = 0;
	int sum = 0;

	std::cout << "Please enter the first integer:";
	std::cin >> number1;

	std::cout << "\nPlease enter second integer:";
	std::cin >> number2;

	sum = number1 + number2;
	std::cout << "\nThe sum of the two intrgers is:" 
			<< sum << "\n" << std::endl;
	
	system("pause");
	return 0;
}
