#include <iostream>
using namespace std;

class CTest
{
	public : 
		CTest(void);
		int m_nData	=	5;
};

CTest::CTest(void)	{}

int main(void)
{
	CTest a;
	cout << a.m_nData << endl;

	return 0;
}
