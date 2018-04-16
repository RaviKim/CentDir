#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main(void)
{

	int cnt 	=	0;
	int N		=	0;
	int resultA	=	0;	// team A	abs
	int resultB = 	0;	// team B

	int Minimum = 	100;
	int compareParam = 100;

	cin >> N;
	int **array = new int* [N];

	int *SaveResultArrayA = new int[N];
	int *SaveResultArrayB = new int[N];
	int *CompareArray	=	new int[N];

	// make N by N array
	for( int i = 0; i < N; ++i)
	{
		array[i] = new int[N];
	}

	// Input Parameter 2D array
	for( int i = 0; i < N; ++i)
	{
		for( int j = 0; j < N; ++j)
		{
			cin >> array[i][j];
		}
	}


	for ( int i = 0; i < N ; ++i)
	{
		for( int j = 0; j < N; ++j)
		{
			if( i !=j )
			{
				//team A 
				resultA = array[i][j] + array[j][i];
				//team B
				resultB = array[N-1-i][N-1-j] + array[N-1-j][N-1-i];
	
				//teamA's score
				SaveResultArrayA[j] = resultA;
				//teamB's score
				SaveResultArrayB[j] = resultB;

				CompareArray[j]= SaveResultArrayA[j] > SaveResultArrayB[j] ? SaveResultArrayA[j] - SaveResultArrayB[j] : SaveResultArrayB[j] - SaveResultArrayA[j]; 


				compareParam	= resultA > resultB ? resultA - resultB : resultB - resultA;
				if(Minimum > compareParam)
					Minimum = compareParam;
				
			}

		}
	}
cout << "Result Test !!!!!!!!!!!!!!!!!!!" << endl;
	for( int i = 0; i < N; i++)
	{
		//cout << SaveResultArray[i] << " " ;
		cout << CompareArray[i] << " " ;

	
	}


cout << "---------------------------------"<< endl;
cout << endl;
cout << "Minimum Value is : " << Minimum << endl;

	// outPut
	for( int k = 0; k < N; ++k)
	{
		for( int q = 0; q < N; ++q)
		{
			cout << array[k][q] << " ";
		}
		cout << endl;
	}

	delete[] array;
	delete[] SaveResultArrayA;
	delete[] SaveResultArrayB;
	delete[] CompareArray;


}
