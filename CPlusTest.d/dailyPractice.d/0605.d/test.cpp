#include <iostream>
#include <map>
using namespace std;

int main(void){
	int cnt;
	cin >> cnt;

	cout << " INPUT TEST IS : " << cnt<< endl;


	map <char , int> mm;
	map <char , int>::iterator iter;

	mm['A'] = 10;
	mm['B'] = 20;

	for(iter = mm.begin(); iter != mm.end(); iter++){
		cout << iter -> first << " " << iter -> second << endl;
	}
}
