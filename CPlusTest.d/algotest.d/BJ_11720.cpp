#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int InNumber = 0; // Input N Number
	int addResult = 0; // add Result

	cin >> InNumber;
	char SaveArray[InNumber];
	char test;

	for(int i = 0; i < InNumber; ++i)
	{
		cin >>test; 
		//SaveArray[i] = test;
		//addResult += SaveArray[i];
		addResult += test-48;
	}
	cout << endl;
	cout << "Check Result : ";
	cout << addResult;
	cout << endl;



}
