#include <iostream>
#include <algorithm>

using namespace std;

int InsertionSortArray[10] = {9,10,1,5,3,2,4,7,8,6};

void print(int arr[],int size ){
	for(int i = 0; i < size;i++){
		cout << arr[i] << " ";
	}
}
void InsertionFunc(int arr[], int size){
	for( int i = 0; i < size-1; i++)
	{
		for(int j = i+1; j>=0; j--)
		{
			if(arr[j-1] > arr[j])
			{
				swap(arr[j-1] , arr[j]);
			}
			else
			{
				continue;
			}


		}
		cout << "Present Array : ";
		print(arr, size);
		cout << endl;
	}


}

int main(void){
int ArraySize = sizeof(InsertionSortArray)/sizeof(int);

InsertionFunc(InsertionSortArray, ArraySize);
print(InsertionSortArray, ArraySize);

}
