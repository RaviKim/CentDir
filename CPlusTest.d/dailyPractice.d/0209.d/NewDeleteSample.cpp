#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	// �ν��Ͻ��� �������� ����
	int *pData = new int;

	//�ʱⰪ�� ����ϴ� ���
	int *pNewData = new int(10);

	*pData = 5;
	cout << *pData << endl;
	cout << *pNewData << endl;

	delete pData;
	delete pNewData;

}



