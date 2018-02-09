#if 0
#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{

	int *pData = new int;
	int *pNewData = new int(10);

	cout << *pNewData << endl;

	delete pData;
	delete pNewData;
}

#endif


#if 1
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int *arr = new int[5];
	for( int i = 0; i < 5 ; i++)
	{
		arr[i] = (i +1) * 10;
	}
	for ( int i = 0; i < 5; ++i)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}

#endif
