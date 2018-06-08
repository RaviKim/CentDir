#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(void){
	int Count = 0;
	int f_cnt , s_cnt , t_cnt = 0;
	//f_cnt is X%3 ==0 , s_cnt is X%2 ==0 , t_cnt is -1

	cin >> Count;	// Repeat Variable.

	int *XArray = new int[Count+1];

	for(int i = 0; i < Count; i++){
	cin >> XArray[i];
}

	for(int i = 0; i < Count; i++){

	while(XArray[i] !=1){
		if(XArray[i] % 3 ==0){
		XArray[i] /=3;
		f_cnt++;
	}
		else if(XArray[i] % 2 == 0){
		XArray[i] /=2;
		s_cnt++;
		}
		else{
			XArray[i] -=1;
			t_cnt++;
		}
	}
	cout << "End Calculate... " << endl;
	}
cout << f_cnt <<" || " << s_cnt <<" || " << t_cnt <<" || " <<endl;

delete[] XArray;
}

