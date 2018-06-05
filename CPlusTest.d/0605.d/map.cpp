#include <map>
#include <iostream>

using namespace std;

int main(){
	map < char, int> mm;
	map < char, int> :: iterator mm_iter;
	int cnt;
	char param;
	cin >> param;
	cin >> cnt;
	mm['C'] = 70;
	mm['A'] = 100;
	mm['B'] = 50;
	mm[param] = cnt;

	for( mm_iter = mm.begin(); mm_iter !=mm.end(); mm_iter++){
		cout << mm_iter -> first << " " << mm_iter -> second << endl;
	}

	return 0;

}
