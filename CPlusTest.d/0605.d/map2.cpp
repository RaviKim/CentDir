#include <iostream>
#include <map>
using namespace std;

int main(void){
	map<char , int> ma;
	map<char , int>::iterator ma_iter;

	ma['B'] = 10;
	ma.insert(make_pair('A',1));

	for(ma_iter = ma.begin(); ma_iter!=ma.end(); ma_iter++){
		cout << ma_iter -> first << " " << ma_iter -> second << endl;
	}
}
