#include <iostream>
#include <cmath>
int n, t, a[13], count = 0;
using namespace std;

bool check(int cur){
	for(int i = 0; i < cur; i++){
		if(a[i] == a[cur] || cur -i == abs(a[cur] - a[i])){
			return false;
		}
	}
	return true;
}

void nqueen(int cur){
	if(cur == n-1){
		count++;
		return;
	}

	for(int i = 0; i< n; i++){
		a[cur+1] = i;
		if(check(cur+1)){
			nqueen(cur+1);
		}
	}
}

int main(void){
	cin >> t;
	int i = 1;
	while(t--){
		count 	=	0;
		cin >> n;
		nqueen(-1);
		cout <<"#" << i<<" " << count << endl;
		i++;
	}
}
