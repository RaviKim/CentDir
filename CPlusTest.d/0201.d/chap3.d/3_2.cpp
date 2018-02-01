#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Calculator
{
	private:
		int addcnt;
		int mincnt;
		int mulcnt;
		int divcnt;
	public:
void Init()
{
addcnt =0;
mincnt =0;
mulcnt =0;
divcnt =0;
}
double Add(double num1, double num2)
{
addcnt++;
return num1 + num2;
}
double Min(double num1, double num2)
{
mincnt++;
return num1 - num2;
}
double Mul(double num1, double num2)
{
mulcnt++;
return num1 * num2;
}
double Div(double num1, double num2)
{
divcnt++;
return num1 / num2;
}
void ShowOpCount()
{
cout << " Add : " << addcnt;
cout << " Min : " << mincnt;
cout << " Mul : " << mulcnt;
cout << " Div : " << divcnt<< endl;
}
};


int main(void)
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2 , 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5 , 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2 , 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}
