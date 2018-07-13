#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int testCase = 0;
int hiStick = 0;
int	iCount = 1;
char soundArray[20];
char printArray[120] = {0,};

void MyJobFunc(char* soundArray, int hiStick, int inputLocation[]);

int main(void){
	cin >> testCase;
	testCase++;	// 수정해봐야함. 우선 작동을 위해 ..
	int * inputLocation= new int[hiStick+hiStick];

	// 입력받는 부분.
	while(testCase--){
		scanf("%s", soundArray);		
		scanf("%d", &hiStick);	
		scanf("%d", inputLocation);

		cout << inputLocation;
		MyJobFunc(soundArray, hiStick, inputLocation[]); 
		
		cout << "#" << iCount++ <<" ";
		cout << printArray << endl;

	}




	delete[] inputLocation;
}


void MyJobFunc(char* soundArray, int hiStick, int inputLocation[]){
	cout << inputLocation;
	

};
