#include <iostream>

using namespace std;

int inputArrayCnt = 0;
int *inputArray = new int[inputArrayCnt+1];	
int *temp_Array = new int[inputArrayCnt+1];
void InputArray();
void printArray(int inputArray[], int Size);
void merging(int inputArray[], int left, int mid, int right);
void mergeSort(int inputArray[], int left, int right);

int main(void){
	InputArray();
	//printArray(inputArray, inputArrayCnt);
	mergeSort(inputArray, 0, inputArrayCnt -1);
	cout << " OutPut : " ;
	printArray(inputArray, inputArrayCnt);

	delete[] inputArray;
	delete[] temp_Array;
}



void InputArray(){
	cout << "Input Array Size : ";
	cin >> inputArrayCnt;
	for(int i = 0; i < inputArrayCnt; i++){
		cin >> inputArray[i];
	}
}

void printArray(int inputArray[], int Size){
	for(int i = 0; i < Size; i++){
		cout << inputArray[i] << ' ';
	}
	cout << endl;
}


void merging(int inputArray[], int left, int mid, int right){
	int ml, mm, tl;	// left, mid, tempArray_left 

	ml = left;	mm = mid+1; tl = left;

	// left - mid compare && mid +1 - right compare
	while(	ml <= mid && mm <= right){
		if(	inputArray[ml] <= inputArray[mm]){
			temp_Array[tl] = inputArray[ml];
			ml++;
		}
		else{
			temp_Array[tl] = inputArray[mm];
			mm++;
		}
		tl++;
	}

	if( ml > mm){
		for(int m = mm; m <= right; m++){
			temp_Array[tl] = inputArray[m];
			tl++;
		}
	}

	else{
		for(int m = ml; m <=mid; m++){
			temp_Array[tl] = inputArray[m];
			tl++;
		}
	}

	for( int m = left; m <= right; m++){
		inputArray[m] = temp_Array[m];
	}


	
}

void mergeSort(int inputArray[], int left, int right){
	int mid;
	if(left < right){
		mid = (left + right) / 2;

		mergeSort(inputArray, left, mid);
		mergeSort(inputArray, mid + 1, right);
		
		/*Combination*/
		merging(inputArray, left, mid, right); 
	}
}
