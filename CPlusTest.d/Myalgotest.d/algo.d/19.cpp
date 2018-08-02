#include <iostream>
#include <vector>
using namespace std;
	
int sx, sy = 0;
int fx, fy = 0;


int loadMap[5][6] = \
{{1, 0, 0, 1, 1, 0},

	{1, 0, 0, 1, 0, 0},

	{1, 1, 1, 1, 0, 0},

	{1, 0, 0, 0, 0, 1},

	{1, 1, 1, 1, 1, 1}};


int SaveMap[5][6] = {{0},};

void Print(){
	for(int i = 0; i <5;i++){
		for(int j = 0; j < 6; j++){
			cout << loadMap[i][j]<<" | ";
		}
		cout << endl;
	}

}

int check(int sx, int sy, int fx, int fy){
	int result = 0;
	int loadCnt = 0;
	while(1){

		//right
		if(loadMap[sx][sy+1] !=0){
			loadCnt++;	
		}
		else{
		
		}
		//left
		//

		//up

		//down



	}


	return -1;
}

int main(void){
	Print();
	cin >> sx >> sy;
	cin >> fx >> fy;

	check(sx, sy, fx, fy);


}




