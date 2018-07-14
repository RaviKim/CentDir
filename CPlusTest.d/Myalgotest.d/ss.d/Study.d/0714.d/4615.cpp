#include <iostream>
#include <stdio.h>


using namespace std;



int T;
int N;	//4,6,8
int M;	//돌 카운트
//1 = Black, 2 = White;
int W_Cnt, B_Cnt = 0;

int x, y = 0; 	// (x,y)
int stone = 0;

bool check(int a, int b, int stone, int arraySize){
	int **Map= new int*[arraySize];	// 2차원 Array 동적할당.
	stone == 1 ? stone = true : stone = false;//Black : White.
	if(Map[a][b] ==0)	Map[a][b] = stone;

} 

void DFS(){

}
void Return(){
	

}

int main(void){
	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> N >> M;
		/*
		   switch(N){
		   case 4:	int Array[4][4]= {0,}	break;
		   case 6:	int Array[6][6]= {0,}	break;
		   case 8: int Array[8][8]={0,}	break;
		   }
		   */

		if(N == 4){
			int Array[4][4] = {0,};
			for(int cnt = 0; cnt < M;cnt++){
				cin >> x >> y >> stone;	// (1,2) 흑돌 예제.
				Array[x][y] = stone;	// 돌놓기.
				check(x, y, stone, 4);

			}
		}






		else if(N==6){
			int Array[6][6] = {0,};
			for(int cnt = 0; cnt < M;cnt++){
				cin >> x >> y >> stone;	// (1,2) 흑돌 예제.
				Array[x][y] = stone;	// 돌놓기.
				check(x, y, stone, 4);

			}

		}
		else if(N==8){
			int Array[8][8] = {0,};	
			for(int cnt = 0; cnt < M;cnt++){
				cin >> x >> y >> stone;	// (1,2) 흑돌 예제.
				Array[x][y] = stone;	// 돌놓기.
				check(x, y, stone, 4);

			}

		}

		printf("#%d %d %d\n", i+1,W_Cnt,B_Cnt);


	}
}
