#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string Array[10];
string compare;
int TestCase = 0;
int sortingResult = 0;


int main(void){
	cin >> TestCase;

	int * CntArray = new int[TestCase+1];
	for(int i = 0; i < TestCase;i++){
		cin >> Array[i];

		compare = Array[i];
		CntArray[i] = compare.length();	// 입력받은 사이즈별 비교.
	}
	sort(CntArray,CntArray+TestCase);
	sortingResult = CntArray[0];

	cout << "가장 긴 prefix 사이즈의 최대치는 " << sortingResult <<" 입니다.";
	cout << endl;

	for(int i = 0; i < TestCase; i++){
//	cout << strncmp(Array[i] , Array[i+1], sortingResult) << endl;
// cout <<Array[i] << endl;
	cout <<	Array[i].compare(Array[i+1]) << " " << endl;
	}

	return 0;
}
