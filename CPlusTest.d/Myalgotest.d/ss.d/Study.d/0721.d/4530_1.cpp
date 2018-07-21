//////////////////////////////
// Samsung Sw Expert Academy
// No. 4530
// <Author> 	RaviKim
// <Date>		180721
// <Version> 	1.0.0
//
///////////////////////////////



#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
using namespace std;


int TestCase = 0; 	// 전체 반복.
double A, B = 0; 	// 층 15자리.

int main(void){
	cin >> TestCase;	
	for(int i = 0; i < TestCase; i++){
		cin >> A >> B;	// 	층을 받음.
		int result = 0;	// 층에 대한 값을 받을 변수
		vector <double> viA;
		vector <int> viB;
		int cnt = 0; 
		A *= -1;
		result = A+B;

		for(int a = 1 ; a <= A; a++){
			if(a !=4) viA.push_back(a);
		}	
		for(int b = 1 ; b <= B; b++){
			if(b !=4) viB.push_back(b);
		}	
		result = viA.size()+ viB.size();
		cout << (result-=1) << endl;
	}
}
