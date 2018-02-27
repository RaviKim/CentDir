#include <iostream>
using namespace std;

class CMyData
{
	public:
		CMyData(int nParam)
		{
		m_pnData	=	new	int;
		*m_pnData	=	nParam;
		}

		int GetData()
		{
			if(m_pnData	!=	NULL)
				return *m_pnData;

			return 0;
		}

	private:
		int *m_pnData	=	nullptr;
};

int main(int argc, char ** argv)
{
	CMyData a(10);
	CMyData	b(a);

	cout << a.GetData()	<<	endl;
	cout << b.GetData()	<<	endl;
	for(int i =0 ; i< 10; i++)
		cout << i << endl;
	return 0;
}
