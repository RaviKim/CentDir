#include <iostream>
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
	printf("Input : ");
	scanf("%[^\n]", Array_num);


	/*
	   문자열을 콤마 기준으로 자를것.
	   */
	char *parse = strtok(Array_num, ",");
	int cnt = 0;
	while(parse){
		SaveArray[cnt++] = atoi(parse);	// askii to integer를 통해 파싱된 문자를 저장함.
		parse = strtok(NULL, ",");
	}


	// Reverse Sort이용. 내림차순
	sort(SaveArray, SaveArray+cnt, greater<int>());
	scanf("%d", &find_num);
	cout << "OutPut : " << SaveArray[find_num-1] << endl;

}
