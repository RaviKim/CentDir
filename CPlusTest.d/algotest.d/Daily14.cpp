#include <iostream>
#include <cstring>
using namespace std;

string Array[10];

int main(void){
	string str;
	
	int strCount = 0;
	int TestCase = 0;

	cin >> TestCase;
	int * SavArray = new int[TestCase];
	for(int i = 0; i < TestCase;i++){
	cin >> Array[i];
	SavArray[i] = sizeof(Array[i])/sizeof(string);	
	}

	for(int i = 0; i < TestCase; i++){
	cout << SavArray[i] << " " << endl;	
	}	
	return 0;
}
