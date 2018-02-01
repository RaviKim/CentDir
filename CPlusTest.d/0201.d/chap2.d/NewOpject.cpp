#include <iostream>
#include <cstdlib>
using namespace std;

class Simple
{
	public : 
		Simple()
		{
			cout <<"I'm simple constructor!" << endl;
		}
};

int main(void)
{
cout << "Case 1 : ";
Simple * sp1 = new Simple;

cout << "Case 2 : ";
Simple * sp2 =(Simple *)malloc(sizeof(Simple) *1);

cout << endl << " end of Main " << endl;
delete sp1;
free(sp2);

return 0;


}
