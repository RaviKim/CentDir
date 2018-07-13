#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <map>
#include <hash_map>

using namespace std;
using namespace stdext;	// using for hash_map

int longest(string s){
	int ret = 0;
	int start = 0;

	hash_map<int,char> map = new hash_map<>();

}

int main(void){
	int count = 0;	// count variable
	char *SaveArray = new char[100];	// 	make Input char saved array.
	char *result = new char[100];
	vector <char> vi;
	vector <char> ::iterator iter;


	cout <<" InPut : " ;
	scanf("%s" , SaveArray	);

	
	for(int i = 0; i < 100; i++){
		if(SaveArray[i] != SaveArray[i+1] ){
	//	if(SaveArray[i] != SaveArray[i+1] && SaveArray[i+1] !=0){
			count++;	
			result[i] = SaveArray[i];	// save & check substring
			vi.push_back(SaveArray[i]);
		}
		else if(SaveArray[i] == SaveArray[i-1]){
			vi.back();
		}
		
	}
	cout << " Result is : " ;

	/*
	for(int i = 0; i < 100; i++){
		cout << result[i];
	}
*/
	for(iter = vi.begin(); iter != vi.end(); iter++){
		cout << *iter ; 
	}
	cout << endl;
	
	
	cout << " Count ";
	cout << count-1 << endl;


	delete[] SaveArray;
	delete[] result;
}
