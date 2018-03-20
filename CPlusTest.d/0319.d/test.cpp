#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
	int cnt;
	int compareArray[3];
	for(cnt = 0; cnt < sizeof(compareArray) / sizeof(int); cnt++)
	{
			cin >>compareArray[cnt];
	}
	sort(compareArray, compareArray+3);
	cout << compareArray[1];
	

}
