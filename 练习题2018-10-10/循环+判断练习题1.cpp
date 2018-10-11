/*练习题目：请用8条语句显示出下面棋盘图案，然后
使用尽可能少的语句显示相同的图案。 
	* * * * * * * *
	 * * * * * * * *
	* * * * * * * *
	 * * * * * * * *
	* * * * * * * *
	 * * * * * * * *
	* * * * * * * *
	 * * * * * * * * 
*/ 

#include <iostream>
using namespace std;

int main() {

	for(int i = 10; i!= 2; i--) {
		
		if(i%2 == 0) {
			cout << "* * * * * * * *" << endl;}
		else{
			cout << " * * * * * * * *" << endl;}
}
system("pause");
return 0;
}



