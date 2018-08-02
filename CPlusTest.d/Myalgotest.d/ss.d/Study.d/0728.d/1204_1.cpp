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
	int MaxResult = 0;
	int middleSave[1000];
	for(int i = 0; i < 1000; i++){
		if(scoreCnt[i] > scoreCnt[i+1]){
			MaxResult = scoreCnt[i];
			middleSave[i] = i;}
	
		else if(scoreCnt[i] = scoreCnt[i+1]){
			MaxResult = scoreCnt[i];
			if(score[i] > score[i+1])
				middleSave[i] = i;
			else
				middleSave[i] = i+1;
		}
		else{
			MaxResult = scoreCnt[i+1];
			middleSave[i] = i+1;
		}

	}
	sort(middleSave , middleSave+1000, greater<int>());
	int rere = middleSave[0];
	cout << "#" << Noidx<<" " << score[rere] << endl;
	}

	
}
