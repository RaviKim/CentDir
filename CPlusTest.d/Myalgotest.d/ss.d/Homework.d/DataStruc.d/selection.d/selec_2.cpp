//	Make SelectionSort

#include <iostream>
#include <algorithm>


using namespace std;

int ArrayCnt = 0;
int minParam = 1;


int main(void){
	cout << " Input Array Size : " ;
	cin >> ArrayCnt;
	int *SaveArray = new int[ArrayCnt];
	for(int i = 0; i < ArrayCnt; i++){
		cin >> SaveArray[i];
	}
	
	for( int i = 0; i <ArrayCnt;i++){
		int min = SaveArray[i];
		int location = i;

		for( int j = i+1; j < ArrayCnt; j++){
			if(min > SaveArray[j]){
				min = SaveArray[j];
				location = j;
			}
		}

		swap(SaveArray[i], SaveArray[location]);

	}
	for( int i = 0; i < ArrayCnt; i++){
		cout << SaveArray[i] << " ";
	}

	cout << endl;
	}




	


	

	

