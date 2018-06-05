#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main(void){

		set < int > s;
		set < int >:: iterator it;

		s.insert(4);
		s.insert(1);
		s.insert(2);


		vector<int> v;
		v.push_back(3);
		v.push_back(5);
		v.push_back(6);

		s.insert(v.begin(), v.end());

		s.erase(4);
		s.erase(s.begin());

		int toErase;
		cin >> toErase;

		it = s.find(toErase);

		if( it != s.end()){
			s.erase(it);
		}

}
