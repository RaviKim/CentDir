#include <stdio.h>
#include <iostream>
using namespace std;

int map[1000];
 
int main() { 
    int test_case,T,i,result=0,j;
 
    for (test_case = 0; test_case < 10; test_case++) {
        scanf("%d", &T);
 
        for (i = 0; i < T; i++) {
            scanf("%d", &map[i]);
        }
 
        for (i = 2; i < T - 2; i++) {
            for (j = map[i]; j >= 1; j--) {
                if ((j > map[i+1] && j > map[i+2]) && (j > map[i-1] && j > map[i-2])) {
                    result++;
                }
                else {
                    break;
                }
            }
        }
         
 
        printf("#%d %d\n", test_case+1, result);
        result = 0;
    }
 
 
    return 0;
 
}
