#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
	int t;
	t=a; a=b; b=t;
}

void Swap(double &a, double &b)
{
	double t;
	t=a;a=b;b=t;
}

int main(void)
{
int a = 3, b=4;
double c = 1.2, d = 3.4;

Swap(a,b);
Swap(c,d);

printf("a = %d, b = %d\n", a, b);
printf("c = %f, d = %f\n", c, d);

}
