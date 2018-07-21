#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(int arr[] , int l, int r, int x){
	if (r >=l){
		int mid = l+ (r-l)/2;

		if(arr[mid] == x)	return mid;

		if(arr[mid] > x)	return binarySearch(arr, l, mid-1, x);

		return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}
/* make BinarySearch  */

int main(void){
	int arr[] = {1, 3, 5, 7 , 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int x = 10;

	int result = binarySearch(arr, 0, size-1, x);
	
	result == -1 ? cout << "There is no num in Array"<<endl :\
				   cout << "Element index is : "<< result << endl;
}

