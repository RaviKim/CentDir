#include <cstdio>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>

using namespace std;


int testCase = 10;
int no = 0;	//	input # number.
int result = 0;
int cnt = 0;

char test[1001];
char tt[10];
string str;
string search;

int main(void){
	while(testCase--){
	cin >> no;

	scanf("%s", test);
	scanf("%s", tt);
	queue <char> que;

	for(int i = 0; i < strlen(test);i++){
		que.push(test[i]);	
	}


	while(!que.empty()){
	/* 앞의 두 문자가 검색하려는 문자와 같으면 count +1 */
	if(!strncmp(test, tt, strlen(tt) )){
		cnt++;
	}
	else{
		int roop 	= 	strlen(tt) ;
		while(roop--){
			que.pop();
		}
	}
	}

	cout << "#"	<< no << " ";
	cout << cnt << endl;
	}
}
