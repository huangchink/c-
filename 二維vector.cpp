#include <iostream>
using namespace std;
#include <set>
int main()
{
	set<int> mySet;
	mySet.insert(20);   // mySet = {20}
	mySet.insert(10);   // mySet = {10, 20}
	mySet.insert(30);   // mySet = {10, 20, 30}
	cout << mySet[0];

	return 0;
}