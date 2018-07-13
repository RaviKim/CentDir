#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
	char test[10];

	test['C'] = '[';
	test['{'] = '}';

	cout << test['C'] << endl;
	cout << test['{'] << endl;
	char first_1 = test['C'];

	printf("%c\n", test['C']);
	printf("%c\n", first_1);
}
