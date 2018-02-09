#include <iostream>
using namespace std;

void TestFunc(int &nData)
{
	nData = 100;
}


int main(int argc , char **argv)
{
	int nData	=	0;
	TestFunc(nData);
	cout << nData << endl;

	return 0;
}
