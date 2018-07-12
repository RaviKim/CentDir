#include <iostream>
#include <cstdio>
#include <stdio.h>
typedef enum _test{
	Test1 = 0x1,
	Test2 = 0x4,
	Test3 = 0x400,
	Test4 = 0x0000,
	enumCount
}_test;

using namespace std;

int main(void){
	cout << "This is a test" << endl;

	for	(_test i = Test1; i < enumCount; i++){
		printf("%d \n", i);
	}
}
