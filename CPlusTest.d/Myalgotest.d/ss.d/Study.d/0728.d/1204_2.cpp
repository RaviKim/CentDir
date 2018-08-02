#include <iostream>
using namespace std;
int test_cast;
int case_number;
int input;
int score[101] = {0};
int mxScore= 0;
 
 
int main(){
    cin >> test_cast;
int max = 0;
    for(int t=0; t<test_cast; t++){
        mxScore= 0;
        max = 0;
    for(int i=0; i<=100; i++){
        score[i] = 0;
    }   
 
    cin >> case_number;
 
    for(int i=0; i<1000; i++){
        cin >> input;
        score[input]+=1;
    }   
    for(int j=0; j<=100; j++){
        if(mxScore<= score[j]){
               mxScore= score[j];
               max = j;
            }   
        }   
 
       cout << "#" << case_number << " " <<  max << '\n';
    }   
 
return 0;
}
