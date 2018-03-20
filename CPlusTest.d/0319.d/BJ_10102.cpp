#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(void)
{
	int A, B;

	int V;	//Human's number
	char VotePaper;
	int cntA	=	0;
	int cntB 	= 	0;
	cin >> V;	

	char * Varray = new char[V];


	for( int i = 0; i < V; i++)
	{
		cin >> Varray[i];
	}

	for(int i = 0; i < V; i++)
	{
		if(Varray[i] == 'A')
			cntA++;
		else if(Varray[i] == 'B')
			cntB++;

	}
	{
		if( cntA > cntB)
			cout << "A";
		else if(cntA < cntB)
			cout << "B";
		//		else if (cntA == cntB)
		else
			cout << "Tie";

	}
cout << endl;
	//	cout <<"A is :  " <<	cntA++	<< endl;
	//	cout <<"B is : " <<		cntB++	<< endl;

}
