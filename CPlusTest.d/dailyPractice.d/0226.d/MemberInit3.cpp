#include <iostream>
using namespace std;

class CTest
{
	public:
		CTest()
		{
			m_nData	=	10;
		}

		int m_nData;
		void PrintData(void);
};

void CTest::PrintData(void){
	cout << m_nData << endl;
}

int main()
{
	cout << "main() Function Start" << endl;
	CTest t;
	t.PrintData();

	cout << "main() Function End" << endl;
	return 0;
}
