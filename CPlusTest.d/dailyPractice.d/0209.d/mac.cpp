#include <iostream>
using namespace std;
// compare a, b
#define MAX(a,b) ( a > b ? a:b )	

int main()
{

// Declaration	
int x = 20, y = 80;
int result;	//x,y compare result


result = MAX(x++ , y++);
cout << " x = " << x << " y = " << y << endl;
cout <<" result = " << result << endl;

}


