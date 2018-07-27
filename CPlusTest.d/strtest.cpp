#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void){
	char Test[32];

	cin >>Test;
	cout << "OutPUT : ";
	cout << Test << endl;

	if(strcmp(Test,"apple") == 0){
		cout <<"Find Text : "<< Test << endl; 
	}
}
