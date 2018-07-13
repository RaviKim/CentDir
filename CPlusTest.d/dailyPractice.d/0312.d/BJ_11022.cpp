#include <iostream>
using namespace std;

int main(void)
{
	int roopCnt, cnt;
	int result;

	int numA, numB;

	cin >> roopCnt;

	int *saveResult= new int[roopCnt];	

	int *numArr = new int[roopCnt];
	int *numBrr = new int[roopCnt];

	for(cnt = 0; cnt < roopCnt; cnt++)
	{
		
		cin >> numA >> numB;

		if(0<numA<10 &&0<numB<10)
		{
		numArr[cnt] = numA;
		numBrr[cnt] = numB;
		
		result = numA + numB;

		saveResult[cnt] = result;
		}
		else
			cout << " check" << endl;

	}


	for(cnt = 0; cnt < roopCnt; cnt++)
	{
	
		cout << "Case #" << cnt +1<< ": ";
		cout << numArr[cnt] << " + " << numBrr[cnt];
		cout << " = " << saveResult[cnt] << endl;
	}

	delete [] saveResult;
	delete [] numArr;
	delete [] numBrr;
}
