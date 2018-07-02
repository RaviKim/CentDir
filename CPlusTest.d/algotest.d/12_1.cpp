#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main(void){
	int find_num = 0;
	char Array_num[10] = {0,};
	int *SaveArray = new int[10];

	/*
	   Enter Key를 받을때까지 '숫자'형태의 문자열을 받아서 저장.
	   */
	scanf("%[^\n]", Array_num);

	/*현재 저장된 문자열 내용 확인. */
	//printf("저장된 문자열 : %s \n", Array_num);

	/*
	   문자열을 콤마 기준으로 자를것.
	   */
	char *parse = strtok(Array_num, ",");
	int cnt = 0;
	while(parse){
		SaveArray[cnt++] = atoi(parse);	// askii to integer를 통해 파싱된 문자를 저장함.
		parse = strtok(NULL, ",");
	}


	cout << "-------------------------------"<< endl;
	cout << "Before Sorting : ";

	for(int i = 0; i < cnt; i++){
		cout << SaveArray[i] <<" ";
	}
	cout << endl;

//	sort(SaveArray,SaveArray+cnt);
	// Reverse Sort이용. 내림차순
	sort(SaveArray, SaveArray+cnt, greater<int>());

	cout << "After Sorting : ";
	for(int i = 0; i < cnt; i++){
		cout << SaveArray[i] <<" ";
	}
	cout << endl;
	

	cout << "몇번째로 큰 크기의 숫자인가요?: ";
	cin >> find_num;

	cout << find_num << " 번째 크기의 숫자는 : " << SaveArray[find_num-1] << "입니다." << endl;

}
