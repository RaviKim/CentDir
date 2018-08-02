#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int TestCase;
int Noidx;
int score[1000];
int scoreCnt[1000];
int idx[1000];
int scCnt = 0;

int main(void){
	cin >> TestCase;
	while(TestCase--){
		cin >> Noidx;

		for(int i = 0; i < 1000; i++){
			cin >> score[i];
		}

		for(int i = 0; i < 1000; i++){
			for(int j = 0; j <1000; j++){
				if(score[i] == score[j]){
					scCnt++;
				}				
			}
		idx[i] = score[i];
		scoreCnt[i] = scCnt;
		scCnt = 0;

		}
	for(int i = 0; i <1000; i++){
	cout << idx[i]<< " | ";
	}
	cout << endl;
	cout << "-------------------------------------";
	cout << endl;
	for(int i = 0; i <1000; i++){
		cout << scoreCnt[i] << " | ";
	}
	}


	
}
