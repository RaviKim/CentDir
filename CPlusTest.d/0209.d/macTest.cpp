#include <iostream>
using namespace std;
#define MAX(a,b) ( a > b ? a:b )

int main()
{
int x = 20, y = 80;
int result;
int compile;

result = MAX(x++ , y++);
compile = MAX(x++ , y++);
cout << " x = " << x << " y = " << y << endl;
cout <<" result = " << result << endl;
cout <<" result = " << compile << endl;
}


