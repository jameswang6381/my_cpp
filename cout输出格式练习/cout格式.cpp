#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	cout.flags(ios::left);	//�����
	cout << setw(10) <<-456.98 <<"The End" << endl;
	cout << setfill('*') << setw(10) <<-456.98 <<"The End" 
		<< setfill(' ') << endl;
	// setfill('')������Ч��Ĭ��Ϊ�ո�����λ 
	// sete() ֻ�Ƕ�ֱ�Ӹ���<<���������������� 
	
	
	cout.flags(ios::internal);	//���˶���
	cout << setw(10) <<-456.98 <<"The End" << endl;
	
	cout.flags(ios::right);	//�Ҷ���
	cout << setw(10) <<-456.98 <<"The End" << endl; 
	
	system("pause");
	return 0;
}
