#include <iostream>
#include <iomanip>
using namespace std;
int main(){

 cout << setw(10)<< 123 << endl;
//123����10�����ȣ�ǰ�油7���ո�Ĭ���Ҷ��룩 

 cout << setw(10) << setiosflags(ios::left) << 123 << endl;
//��������룬���油7���ո�

 cout << setw(10) << setfill('*') << 123 << endl;
 //��*�ǺŶ����ǿո�������10��λ��
}
