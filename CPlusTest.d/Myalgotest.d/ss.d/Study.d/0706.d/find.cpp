#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int arr[] = {10,20,30,40,50};
	vector <int> vec1(&arr[0], &arr[5]);
	vector <int> ::iterator it;

	if(find(vec1.begin(), vec1.end(), 30) != vec1.end())
		cout << " Find Success" << endl;
	else
		cout << " Searching Failed.." << endl;
}
