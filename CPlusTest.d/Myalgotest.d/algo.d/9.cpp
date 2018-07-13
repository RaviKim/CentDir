/*
Input: [10, 5, 4, 3, -1]
Output: 5
Input: [3, 3, 3]
Output: Does not exist.
*/

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

#define m_size 100

using namespace std;

int main(void){
	int compare = 0; 
	int cnt = 0;
	cin >> cnt;


	int *Array = new int[m_size];

	for(int i = 0; i < cnt; i++){
		cin >> Array[i];
	}

	for( int i = 0; i < cnt; i++){
		if(compare < Array[i])
		compare = Array[i];
	}
	sort(Array,Array+cnt);	
	cout << "Big number is ";
	cout << compare << endl;
	cout << "Second number is :";

	for(int i = 0; i < cnt; i++){
		if(i = cnt -1){
			cout << Array[i-1];
		}
	}


	return 0;

}
