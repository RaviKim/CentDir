#include <iostream>
using namespace std;

int main(void)
{
	int roopCnt, cnt;
	int result;

	int numA, numB;

	cin >> roopCnt;

	int *saveResult= new int[roopCnt];	

	for(cnt = 0; cnt < roopCnt; cnt++)
	{
		
		cin >> numA >> numB;
		if(0<numA<10 &&0<numB<10)
		{
		result = numA + numB;

		saveResult[cnt] = result;
		}

	}


	for(cnt = 0; cnt < roopCnt; cnt++)
	{
	
		cout << "Case #" << cnt +1<< ": " << saveResult[cnt] << endl;
	}


}
