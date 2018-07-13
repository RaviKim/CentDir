#include <iostream>
using namespace std;

int main(void)
{
	int PNum;
	int cnt;
	int NotCute=0;
	int Cute=0;

	int CheckSum[102]= {0,};
	cin >> PNum;

	for(cnt = 0 ; cnt < PNum; cnt++)
	{
		
		cin >> CheckSum[cnt];
		if(CheckSum[cnt] == 0)
			NotCute++;
		else if(CheckSum[cnt] == 1)
			Cute++;
	}

	NotCute > Cute ? cout << "Junhee is not cute!" : cout << "Junhee is cute!";


}
