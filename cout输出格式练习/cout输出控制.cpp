#include <iostream>
#include <iomanip>
using namespace std;
int main(){

 cout << setw(10)<< 123 << endl;
//123不足10个长度，前面补7个空格（默认右对齐） 

 cout << setw(10) << setiosflags(ios::left) << 123 << endl;
//声明左对齐，后面补7个空格

 cout << setw(10) << setfill('*') << 123 << endl;
 //用*星号而不是空格，来补足10个位置
}
