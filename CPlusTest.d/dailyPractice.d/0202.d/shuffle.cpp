//////////////////////////////////////////////////////////////////////////
//
//	<< Practice C ++>
//	
//	<Desciption>  A function how to use stL shuffle 
//	<return> 	None
//	
//	<History Info>	Ver Date			comment			Owner
//                  ------------------------------------------------
//					2018-02-02			Practice 		RaviKim / HSkim
//
//
/////////////////////////////////////////////////////////////////////////



#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;


int main(void)
{

//////////////////////////////////////
// Declaration Parameter
//
//////////////////////////////////////

	int cnt;
	int i;
	vector<int> vi(20);
	vector<int> :: iterator it;
	vector<int> memarr(20);


///////////////////////////////////////
//
//	make random number and input vi[i]
//	and then, shuffle number
//
///////////////////////////////////////

	srand(time(NULL));
	for(i = 0; i < 20; i++)	vi[i] =rand()%45+1;
	random_shuffle(vi.begin(), vi.end());

	for(it = vi.begin(),cnt=0; it!=vi.end();cnt++, it++)
	{
		memarr[cnt] = *it;	// save itvalue mem array
		cout << *it << ' ';

	}
	cout << endl;
	cout << endl;

/////////////////////////////////////////////
//
//	sort in memarr data & Print
//
/////////////////////////////////////////////

	sort(&memarr[0] , &memarr[20]);
	for(it = memarr.begin(); it != memarr.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;
}

