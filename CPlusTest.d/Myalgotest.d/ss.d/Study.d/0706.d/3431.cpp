#include <iostream>
#include <cstdio>


using namespace std;


int TestCase = 0;
int Result	= 0;
int L, U, X = 0;


int main(void){
	cin >> TestCase;

	for(int i = 1; i<= TestCase; i++){
	cin >> L >> U >> X;

	/*제한된 시간보다 운동을 덜했다면. */
	if(X < L){
		Result = L - X;
	}
	else if( X <= U && X>= L){
		Result = 0;
	}
	else if( X > U){
		Result = -1;
	}
	printf("#%d %d\n", i, Result);
	}
}
