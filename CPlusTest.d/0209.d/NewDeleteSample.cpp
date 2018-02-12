#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	// 인스턴스만 동적으로 생성
	int *pData = new int;

	//초기값을 기술하는 경우
	int *pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;

}



