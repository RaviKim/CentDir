#include <iostream>
#include <vector>
using namespace std;


int main()
{
 cout << "This is Vector Test" << endl;

 vector<int> v(5); // Initialrize number
 cout << "Size is : " << v.size() << " Capacity : " << v.capacity() << endl;
 
 vector<int>().swap(v);
 cout << "Size is : " << v.size() << " Capacity : " << v.capacity() << endl; 


 vector<int> v1;
 v1.push_back(10);
 v1.push_back(20);
 v1.push_back(30);
 v1.push_back(40);
 v1.push_back(50);

 cout << v1[0] << " , " << v1.at(0) << ", " << v1.front() << endl;
 cout << v1[4] << " , " << v1.at(4) << ", " << v1.back() << endl;


 v1.front() = 100;
 v1.back() = 500;

 cout << v1[0] << " , " << v1.at(0) << ", " << v1.front() << endl;
 cout << v1[4] << " , " << v1.at(4) << ", " << v1.back() << endl;


}
