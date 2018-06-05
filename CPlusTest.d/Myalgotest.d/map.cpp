#include <iostream>
#include <string>
#include <map>


using namespace std;

int main(){
	map <string, int> m;

	m.insert(make_pair("a", 1));
	m.insert(make_pair("b", 2));
	m.insert(make_pair("c", 3));
	m.insert(make_pair("d", 4));

	m["f"] = 5;

	if(!m.empty()) cout << "m size : " << m.size() << "\n";

}
