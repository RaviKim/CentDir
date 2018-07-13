#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int age;
	char * no_vote[] = {"Empty!!" , "tangible"};

	cout << " What is your age? " ;
	cin >> age;


	try
	{
		if ( age > 19) throw 1;
		else throw 0;
	}

	catch(int result)
	{
	cout << " Your vote is : " << no_vote[result] << endl;
	}
	return 0;
}
