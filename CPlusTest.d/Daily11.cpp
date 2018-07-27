#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
int Acnt = 0;
int Bcnt = 0;
char inputA , inputB;

char *inputArray = new char[10];
char *inputBrray = new char[10];

char *compareA = new char[10];
char *compareB = new char[10];

	for( int i = 0; i < 4; i++){
		cin >> inputArray[i];
		if(inputArray[i-1] != inputArray[i]){
			compareA[Acnt] = inputArray[i];
			Acnt++;
		}
	}
	
	for( int i = 0; i < 4; i++){
		cin >> inputBrray[i];
		if(inputBrray[i-1] != inputBrray[i]){
			compareB[Bcnt] = inputBrray[i];
			Bcnt++;
		}
	}
	
	if(Acnt != Bcnt){
		cout << "False";
	}
	else cout << "True";
	
	
delete[] inputArray;
delete[] inputBrray;
delete[] compareA;
delete[] compareB;
	
}
