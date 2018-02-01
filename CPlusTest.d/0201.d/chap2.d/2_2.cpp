#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
	const int num		=	12;
	const int *pnum		=	&num;
	const int *(&ref)	=	pnum;
	
	cout << *pnum << endl;
	cout << *ref << endl;


}
