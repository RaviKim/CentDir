#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i , num;
	cout << " Input Array Size : " ;
	cin >> num;

	vector<int> arr(num);

	for(i = 0; i < num; i++)	arr.push_back(i);

	for(i = 0; i < num; i++) cout << "arr [" << i <<"]="<< arr[i] << endl;
}


