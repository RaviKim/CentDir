#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

char * MakestrAdr(int len)
{
	char * str = (char*) malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char * str = MakestrAdr(20);
	strcpy(str, "I am So Happy ~");
	cout << str << endl;
	free(str);
	return 0;
}
