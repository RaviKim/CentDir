////////////////////////////////////////////
// 매일 프로그래밍 12주차.
// Author : RaviKim
// Copyright @ dev@mailprogramming.com 에 있습니다.
// 
// Date. 18-06-25 
//
// /////////////////////////////////////////

#include <iostream>
using namespace std;

int cnt = 0;
int semiResult = 1; 
int *Array = new int[cnt+1];

void InputArray(int cnt){

	/*정수들을 입력 받습니다. */
	for(int i = 0; i < cnt; i++){
		cin >> Array[i];
	}

}

void OutputArray(int cnt){
	cout << " InPut : " ;
	for(int i = 0; i < cnt; i++){
		cout<<  Array[i] << " ";
	}
	cout << endl;

}

int main(void){

	/* 입력받을 정수와 중간 곱하기를 계산할 정수를 선언합니다. */
	cin >> cnt; // input받을 배열 정수의 개수를 입력받습니다.
	InputArray(cnt);

	int *Array = new int[cnt+1];	// input값들을 저장하는 배열.
	int *Result = new int[cnt+1];	// 곱하기 계산된 값들을 저장하는 배열.

	/* 입력받은 정수들을 출력합니다. */
	cout << " InPut : " ;
	for( int i = 0; i < cnt; i++){
		cout << Array[i] << " ";
	}
	cout << endl;

	/* 
	   실 계산하는 메인 부분.
	   먼저 해당 원소를 제외한 나머지 원소들의 곱셈을 구해서 Result 배열에 넣습니다.
	   다만 이러한 문제풀이는 답은 맞지만 문제에서 요구하는 O(n) TimeComplexity를 만족하지 않습니다.
	   TimeComplexity를 해결하는 방법은 다음 포스트에서 구현하겠습니다.
	   */
	for(int i = 0; i <cnt;i++){
		for(int j = 0; j< cnt; j++){
			if(i !=j) semiResult *= Array[j];
			Result[i] = semiResult;
		}
		semiResult = 1;	// 초기화.
	}

	cout << " OuPut : " ;
	for( int i = 0; i < cnt; i++){
		cout << Result[i] << " ";
	}
	cout << endl;


	delete[] Array;
	delete[] Result;
}
