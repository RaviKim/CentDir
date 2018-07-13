#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int TestCase = 0;

int P,Q,R,S = 0;

int monthLiter = 0;
int Result = 0;
int A_Money, B_Money = 0;

int main(void){
	scanf("%d", &TestCase);
	for(int i = 0; i < TestCase; i++){

	scanf("%d %d %d %d %d", &P, &Q, &R, &S, &monthLiter);
	A_Money = P * monthLiter;

	monthLiter <= R ? B_Money = Q : B_Money = Q + ((monthLiter-R) *S); 
	A_Money < B_Money ? Result = A_Money : Result = B_Money;	
	
	printf("#%d %d\n", i+1,Result);
	}
}
