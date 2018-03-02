#include <iostream>
#include <stack>
#include <stdio.h>

using namespace std;

int main(){
	int num1, num2, st_size;
	stack<int> st;

	cout <<"Stack Test"<< endl;
	cout << "Input Stack size : ";
	cin >> num1;

	for(int cnt = 0; cnt < num1; cnt++)
	{
		cin >> num2;
		st.push(num2); 
	}

	cout << "-------------------------" << endl << endl;
	while(!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
}
