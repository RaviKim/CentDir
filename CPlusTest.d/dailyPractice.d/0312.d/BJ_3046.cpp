#include <iostream>
using namespace std;

int main(void)
{
	int R1, R2;
	int S;

	cin >> R1 >> S;



	if((-1000 <= R1 <= 1000) && -1000<= S <=1000)
	{
		R2 = (2*S) - R1;

		cout << R2 << endl;
	
	}
	else
		cout << " Retry another Number " << endl;






}
