#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

char * makeString(int len)
{
	char *str = new char[len];
	return str;
}

int main()
{
	char * str = makeString(100);
	strcpy(str, "This is new");

	cout << str << endl;

	delete [] str;

	return 0;

}

