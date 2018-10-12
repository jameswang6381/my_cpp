
#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char *argv[]) {
	enum color { red, yellow, blue, white, black };
	enum color pri;
	int n, loop, i, j, k, l;
	char c;
	n = 0;
	j = 0;
	cout.flags(ios::left);
	for (i = red; i<= black; i++)
		for (j = i+1; j <= black; j++)
			//if (i != j)
			//{
			for (k = j+1; k <= black; k++)
				if ((i !=j)&&(k != i) && (k != j))
				{
					n = n + 1;
					//cout.width(2);
					cout << setw(2) << n;
					
					for (loop = 1; loop <= 3; loop++)
					{
						switch (loop)
						{
						case 1:pri = (enum color)i; break;
						case 2:pri = (enum color)j; break;
						case 3:pri = (enum color)k; break;


						default:break;
						}
						switch (pri)
						{
						case red:cout << setw(9) << "  red"; break;
						case yellow:cout << setw(9) << "  yellow"; break;
						case blue:cout << setw(9) << "  blue"; break;
						case white:cout << setw(9) << "  white"; break;
						case black:cout << setw(9) << "  black"; break;
						default:break;
						}
					}
					cout << endl;
					//				}

				}

				cout << "\ntotal:" << n << endl;
				return 0;}
