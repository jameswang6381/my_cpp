#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout.flags(ios::left);	//左对齐
	cout << setw(10) <<-456.98 <<"The End" << endl;
	cout << setfill('*') << setw(10) <<-456.98 <<"The End" 
		<< setfill(' ') << endl;
	// setfill('')长期有效，默认为空格填充空位 
	// sete() 只是对直接跟在<<后的输出数据起作用 
	
	
	cout.flags(ios::internal);	//两端对齐
	cout << setw(10) <<-456.98 <<"The End" << endl;
	
	cout.flags(ios::right);	//右对齐
	cout << setw(10) <<-456.98 <<"The End" << endl; 
	
	system("pause");
	return 0;
}
