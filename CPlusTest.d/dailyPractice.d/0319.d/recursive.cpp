#include <iostream>
#include <algorithm>


using namespace std;

int Facto(int Num);

int main(void)
{
int nCnt = 0;

cout << " Practice Recursive call" << endl;

cin >> nCnt;

cout << Facto(nCnt)<< endl;

}

int Facto(int Num)
{
	if(Num !=0)
		return Num * Facto(Num-1);

	return 1;

}
