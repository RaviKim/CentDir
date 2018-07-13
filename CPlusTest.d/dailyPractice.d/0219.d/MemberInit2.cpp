#include <iostream>

using namespace std;

class CTest
{
	private:
		int m_nData;
	public:
		CTest()
		{
			cout << "CTest() : Creator Func " << endl;
			m_nData = 10;
		}

//		int m_nData;

		void PrintData(void)
		{
			cout << m_nData << endl;
		}
};







int main(int argc, char **argv)
{
	cout << "main() Func Start! " << endl;

	CTest t;
	t.PrintData();

	cout << "Main() Func End!" << endl;

	return 0;
}
