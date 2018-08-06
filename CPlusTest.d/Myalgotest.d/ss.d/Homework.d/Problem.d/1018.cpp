#if 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M = 0;

char LW[8][8];
char LB[8][8];
vector < vector <char> > FirstBoard(N, vector<char>(M, 0));

void LWMake(){
	for (int a = 0; a < 8; a++){
		for (int b = 0; b < 8; b++){
			if ((a + b) % 2 == 0) LW[a][b] = 'W';
			else LW[a][b] = 'B';
		}
	}
}

void LBMake(){
	for (int a = 0; a < 8; a++){
		for (int b = 0; b < 8; b++){
			if ((a + b) % 2 == 0) LB[a][b] = 'B';
			else LB[a][b] = 'W';
		}
	}
}

void BoardInput(int N, int M){
	//보드 전체 받기.

	for (int a = 0; a < N; a++){
		for (int b = 0; b < M; b++){
			cin >> FirstBoard[a][b];
		}
	}
}

int main(void){

	//FirstLine Input Board Status

	cin >> N >> M;


	vector <int> Memorization;

	LWMake();
	LBMake();
	BoardInput(N, M);




	for (int a = 0; N >= 8; a++, N--)
	{
		for (int b = 0; M >= 8; b++, M--)
		{

			/* LW 와 비교*/
			if (FirstBoard[a][b] == 'W')
			{
				int LWChange = 0;
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (FirstBoard[i + a][j + b] != LW[i][j]) LWChange++;

					}
				}

				Memorization.push_back(LWChange);
			}


			/* LB와 비교*/
			if (FirstBoard[a][b] == 'B')
			{
				int LBChange = 0;
				for (int i = 0; i < 8; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (FirstBoard[i + a][j + b] != LB[i][j]) LBChange++;
					}
				}

				Memorization.push_back(LBChange);

			}
		}
	}
	sort(Memorization.begin(), Memorization.end());
	cout << Memorization[0];



}


#endif

