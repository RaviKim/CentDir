//////////////////////:////////
// Samsung Sw Expert Academy
// No. 4530
// <Author> 	RaviKim
// <Date>		180721
// <Version> 	1.0.4
// <Modify>	
//	1.0.0 : Posible TestCase a single digit (ex, 1-10)
//	1.0.1 : Posible TestCase intSize digit
//	1.0.2 : Modify Runtime Error
//	1.0.3 : Fix Static Variable 
//	1.0.4 : Modify Data Type Size
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

double CheckFunc(double number);
static int counterA , counterB = 0;


int main(void){

	cin >> TestCase;	

	for(int i = 0; i < TestCase; i++){

		int result = 0;	// 층에 대한 값을 받을 변수
		cin >> A >> B;	// 	층을 받음.
		A *= -1;

		CheckFunc(A);
		CheckFunc(B);

		result = counterA + counterB;

		// 자기자신을 계산했으니, 제외 result -1
		cout << (result-=1) << endl;

		//Static Param 초기화
		counterA -= counterA;
	}
}

int CheckFunc(int number){
	vector <int> viCount;
	int SimpleLoop = 0;

	if(number / 10 < 1 || number > 0) SimpleLoop	=	number;
	else	SimpleLoop = number % 10;

	for(int cnt = 0; cnt < SimpleLoop; cnt++){
		if( cnt != 4)	viCount.push_back(cnt);
	}
	/* 10의 자리숫자 제외. */
	counterA += viCount.size();
	//	(number / 10) > 0 ?	return CheckFunc(number) : return 0;
	if(number/10 > 0){
		number /= 10;
		return CheckFunc(number);
	}
	else
		return CheckFunc(number);
	

}
