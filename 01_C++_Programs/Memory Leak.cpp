/*#include <iostream>
#include <conio.h>
using namespace std;
*/
#include<constream.h>

int &f()
{
	int a = 10;
	int &b = a;
	cout << "&b as b in f()" << b << endl;
	return b;
}

int &m()
{
	int &a=0;	//int &a=a
	for (int i = 0; i <= 10; i++)
	{
		a++;
	}
	cout << "a in m()" << a << endl;
	return a;
}

int main()
{
	int &n = f();
	m();
	cout << n << endl;
	getch();
	return 0;
}