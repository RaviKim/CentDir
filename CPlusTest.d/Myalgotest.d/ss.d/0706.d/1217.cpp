#include <iostream>
using namespace std;

int TestCase = 10;
int no = 0;	//#숫자 부분.

int N, M = 0;


int main(void){
	while(TestCase --){

	int result = 1;	// 결과 출력.
	cin >> no;	// # 숫자 입력.
	cin >> N >> M;	// 두 숫자 입력

	/* 거듭제곱 */
	for(int i = 0; i < M;i++){
		result *= N;
	}	
	
	cout << "#" << no << " " << result<< endl;
	}


}
