#include <iostream>
#include <vector>
#include <algorithm>
#define ABS(a, b) a > b ? a - b : b - a

using namespace std;

int N = 0;

int main(void){

	cin >> N;
	vector < vector <int> > Soccer(N, vector <int>(N, 0));
	vector < vector <int> > CheckMap(N, vector<int>(N, 0));


	for (int a = 0; a < N; a++){
		for (int b = 0; b < N; b++){
			cin >> Soccer[a][b];
		}
	}


	cout << "-----------Map--------------" << endl;
	for (int a = 0; a < N; a++){
		for (int b = 0; b < N; b++){
			cout << Soccer[a][b] << " ";

		}
		cout << endl;
	}
	cout << "-----------CheckMap--------------" << endl;
	for (int a = 0; a < N; a++){
		for (int b = 0; b < N; b++){
			cout << CheckMap[a][b] << " ";

		}
		cout << endl;
	}

	vector <int> result;
	for (int T = 0; T < N - 1; T++)	// 3번 반복. N=4 일시에
	{
		for (int a = 0; a < N; a++)
		{
			int team1 = 0;
			int team2 = 0;
			for (int b = 0; b < N; b++)
			{
				if (a != b && CheckMap[a][b] != 1)
				{
					team1 = Soccer[a][b] + Soccer[b][a];
					CheckMap[a][b] = 1;
					CheckMap[b][a] = 1;
				}
				if (a != b && CheckMap[a][b] != 1 && N - a >= 0 && N - b >= 0)
				{
					team2 = Soccer[N - a][N - b] + Soccer[N - b][N - a];
					CheckMap[N - a][N - b] = 1;
					CheckMap[N - b][N - a] = 1;
				}
				int compareScore = ABS(team1, team2);
				result.push_back(compareScore);
			}
		}
	}

	cout << "-----------CheckMap--------------" << endl;
	for (int a = 0; a < N; a++){
		for (int b = 0; b < N; b++){
			cout << CheckMap[a][b] << " ";

		}
		cout << endl;
	}

	for (int a = 0; a < N - 1; a++){
		cout << result[a] << " ";
	}
	cout << endl;
	cout << "Anwer is : ";
	sort(result.begin(), result.end());
	cout << result[0];





}
