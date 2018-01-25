#include <iostream>

using namespace std;

int main(void){
	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dref << endl;
	return 0;
}


