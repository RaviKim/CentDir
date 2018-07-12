#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Array[200];
int inputNum = 0;
int Score = 0;
int middleNum = 0;

int main(void){
	cin >> inputNum;
	for(int i = 0; i < inputNum; i++){
		cin >> Array[i];
	}
	middleNum = (inputNum/2);
	
	sort(Array, Array+inputNum);

	cout << Array[middleNum];
}
