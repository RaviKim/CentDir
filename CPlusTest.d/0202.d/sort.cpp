//////////////////////////////////////////////////////////////////////////
//
//	<< Practice C ++>
//	
//	<Desciption>  A function how to use stL sort and reverse
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
using namespace std;


int main()
{
	//int ari[]= {2,8,5,1,9};

	int cnt;
	int asize;	//	 arraysize param


/////////////////////////////////////////
//
//	Input array And Init vertor Template
//
//
//
///////////////////////////////////////
	cout << "Input array size : " ;
	cin >> asize;
	cout << endl;

	vector<int> ari(asize);
	vector<int> memari(asize);	//	 save array parm


	cout << "Input array parameters : ";
	for(cnt = 0; cnt <asize ; cnt++)
	{
		cin >> ari[cnt];
		cout << "\t";
	}
	cout << endl;

///////////////////////////////////////////////////////
//
//	Sort and point using bu iterator 
//	
//	When finish sorting jobs, input sort parameter in
//	memari[cnt] parameters
//
//
///////////////////////////////////////////////////////

	vector<int> vi(&ari[0], &ari[asize]);
	sort(vi.begin(), vi.end());
	vector<int> :: iterator it;

	for(it=vi.begin(),cnt=0; it!=vi.end(); it++, cnt++)
	{
		cout << *it << endl;
		memari[cnt] = *it;	// save sort param in memari 
	}
	cout << "----------------------" << endl;


///////////////////////////////////////////////////////
//
//	reverse memari array 
//	and then
//	Print memari[cnt] 
//
//////////////////////////////////////////////////////
	reverse(&memari[0] , &memari[asize]);
	cout <<	"mem : ";

	for(cnt=0; cnt < asize; cnt++)
	{
		cout << memari[cnt] << " ";
	}
	cout << endl;
}
