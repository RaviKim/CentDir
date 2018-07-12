#include <iostream>
#include <list>
using namespace std;

void main(){
	list<int> lst;

	int i;

	for(i = 0; i< 5; i++){
		lst.push_back(i);
	}

	list<int>::iterator it;

	for(it = lst.begin(), i = 0; it!= lst.end();it++,i++){
		cout << i << " th = " << *it<< endl;
	}
}
