#include <iostream>
using namespace std;


int main(void){
	int cnt = 0; // Testcase T
	int A,B,C,D = 0;

	int * AliceRate = new int[cnt];
	int * BobRate = new int[cnt];

	cin >> cnt;

	for(int i = 0; i < cnt; i++){
		cin >> A >> B >> C >> D;
		AliceRate[i] =((double)A/(double)B)*100.00;
		BobRate[i] =((double)C/(double)D) * 100.00;
		
		if(AliceRate[i] > BobRate[i]){
			cout << "Alice" << endl;
		}
		else if(AliceRate[i] < BobRate[i]){
			cout << "Bob" << endl;
		}
		else{
			cout << "Draw" << endl;
		}
	
	}



}
