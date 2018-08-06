// 	Author	: RaviKim
//	Date	: 180720  
//  Description : BinarySearch Function realizaion

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
	int	cnt = 0;
	cin >> cnt;
	int * arr = new int[cnt];
	for(int i = 0; i < cnt; i++){
		cin >> arr[i];
	}

	int size = sizeof(arr) / cnt;
	int x = 0;
	cout << "Input Find Number : ";
	cin >> x;

	int result = binarySearch(arr, 0, size-1, x);
	
	result == -1 ? cout << "There is no num in Array"<<endl :\
				   cout << "Element index is : "<< result << endl;
}

