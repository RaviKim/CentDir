#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    int InNumber = 0; // Input N Number
    int addResult = 0; // add Result
    char test;
    cin >> InNumber;
    
    for(int i = 0; i < InNumber; ++i)
    {   
        cin >> test; 
        addResult += test-'0';
    }   

    cout << addResult;
}
