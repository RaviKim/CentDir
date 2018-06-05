#include <iostream>
#include <stdio.h>

using namespace std;



int main(){
	int cnt = 0;
	cin >> cnt;

	char *Array = new char [cnt+1];

	for(int i = 0; i < cnt; i++){
			cin >> Array[i];
	}
	int i = 0;
	while(cnt--){
		cout << Array[i] << endl;
		i++;
	}
	return 0;
}

