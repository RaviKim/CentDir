#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int TestCase = 1;  
int N, M , C = 0;
int g_ArrSize = 0;

//int SweatMap[10][10]= {0,};
int CostResult = 0;


void SweatCheck(int ** SweatMap, int SweatBucket, int MaxHoney){

	//////////////////////////////////////////////////////
	/:/	MaxCheck
	//  N - M = 1 
	//  Sweatmap[][b] 의 합이 C보다 작아야함.
	//  for문 안에서 M번 돌려서 합을 계속 저장해야함.
	//
	//////////////////////////////////////////////////////
	int Costmax = MaxHoney * MaxHoney;
	vector <int> Savehoney_1;
	int CheckMap[g_ArrSize][g_ArrSize]= {0,};	
	int Honey_1 , Honey_2 = 0;	// Worker 1 , Worker 2

	for( int a = 0 ; a < g_ArrSize; a++)
	{
		for( int b = 0; b < g_ArrSize; b++)
		{
			if(CheckMap[a][b] !=1)
			{
				for(int c = 0; c < SweatBucket; c++)
				{
					if(Honey_1 + SweatMap[b][c] < MaxHoney)
						Honey_1 += SweatMap[b][c];
				}
				CheckMap[a][b] = 1;
			}			





		}
	}


}


int main(void)
{
	for(TestCase; TestCase <=10; TestCase++)
	{
		cin >> N >> M >> C;
		g_ArrSize = N;
		int ** SweatMap = new int*[N];
		for( int i = 0; i < N; i++){
			SweatMap[i] = new int[N];	
		}

		for( int i = 0; i < N; i++){
			for( int j = 0; j < N; j++){
				cin >> SweatMap[i][j] ;
			}
		}

		SweatCheck(SweatMap, M,C);







		cout <<"#" << TestCase << " " << CostResult << endl;

		for( int i = 0 ;i < N ; i++){
			delete [] SweatMap[i];
		}
		delete [] SweatMap;
	}
	return 0;
}

