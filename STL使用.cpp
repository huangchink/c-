#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
	set<int> mySet;
	mySet.insert(20);   // mySet = {20}
	mySet.insert(10);   // mySet = {10, 20}
	mySet.insert(30);   // mySet = {10, 20, 30}
	mySet.count(20)==1?cout<<20:cout<<0;


	map<string, int> m;     // 從 string 對應到 int
	m["one"] = 1;       // "one" -> 1
	m["two"] = 2;       // "two" -> 2
	m["three"] = 3;     // "three" -> 3
	cout << m["one"] << endl;       // 1
	cout << m["three"] << endl;     // 3
	cout << m["ten"] << endl;       // 0 (無對應值)
	
	
	
	
	system("pause");
	return 0;
}