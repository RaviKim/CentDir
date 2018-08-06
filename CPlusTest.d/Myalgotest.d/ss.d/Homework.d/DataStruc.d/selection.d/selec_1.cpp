//	Make SelectionSort
//
//
//
//

#include <iostream>
#include <algorithm>


using namespace std;

int SaveArray[10]= {0,};
int ArrayCnt = 0;
int minParam = 1;


int main(void){
	for(int i = 0; i < 10; i++){
		cin >> SaveArray[i];
	}
	
	for( int i = 0; i <10;i++){
		int min = SaveArray[i];
		int location = i;

		for( int j = i+1; j < 10; j++){
			if(min > SaveArray[j]){
				min = SaveArray[j];
				location = j;
			}
		}

		swap(SaveArray[i], SaveArray[location]);

	}
	for( int i = 0; i < 10; i++){
		cout << SaveArray[i] << " ";
	}

	cout << endl;
	}




	


	

	

