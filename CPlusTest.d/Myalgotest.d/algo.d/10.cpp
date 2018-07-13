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
	int cnt = 0;
	cin >> cnt;
	int compare = 0;

	int *Array = new int[m_size];

	for(int i = 0; i < cnt; i++){
		cin >> Array[i];
		compare += Array[i];
	}

	sort(Array,Array+cnt);	
	if(compare  == Array[0] * cnt){
		cout << "Does not exist" << endl;
		return 0;
	}
	cout << "Second number is :";

	for(int i = 0; i < cnt; i++){
		if(i = cnt -1){
			cout << Array[i-1] << endl;
		}
	}


	return 0;

}
