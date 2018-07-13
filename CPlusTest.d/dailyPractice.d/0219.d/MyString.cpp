#include <iostream>
using namespace std;


class CMyString
{
	public:
	
		int SetString(const char* pszParam);
		char* GetString();
		void Release();
	private:

		// String Save Dynamic Alloc Mem Pointer
		char* m_pszData;

		// Saved String's length
		int m_nLength;
};

int CMyString::SetString(const char* pszParam)
{
	return 0;
}

char* CMyString::GetString(void)
{
	return m_pszData;
}

void CMyString::Release()
{

}

void TestFunc(CMyString &param)
{
	cout << param.GetString() << endl;
}

int main(int argc, char **argv)
{
	CMyString strData;
	strData.SetString("Hello");
	TestFunc(strData);

	cout << strData.GetString() << endl;

	return 0;
}
