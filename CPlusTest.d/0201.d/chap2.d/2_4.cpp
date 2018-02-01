#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	char str[]= "String TEST";
	char strmem[100];

	cout << strlen(str)	<< endl;
	strcpy(strmem, str);
	cout << strmem << endl;
//	cout << strcmp(str, "Test cmp func!!!!!")	<<	endl;;
	cout << strcat(strmem, " COPY") << endl;




}
