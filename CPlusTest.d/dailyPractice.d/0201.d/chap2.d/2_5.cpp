#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


int main(void)
{
	int cnt;
	srand(time(NULL));

	cout << "C Function Test!! " << endl;

	for(cnt = 1; cnt <= 5; cnt++)
	{
		int temp = rand() % 100;
		cout <<cnt << "nd : " <<temp<<endl ;
	}
	cout << endl;
	
}
