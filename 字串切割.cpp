#include<iostream>
#include<string>
#include <sstream>
#include<vector>
  using namespace std;
  int main(){
      string str;
      string fuck ="1,5,6,7,8,9,11,12,15,18,25,30";
      istringstream  shit(fuck);
      vector<int>integer;
      
      while (getline(shit, str, ',')){
      cout<<"The string we have gotten is :"<<str<<endl;
     integer.push_back(atoi(str.c_str()));//str.c_str() 把string物件轉成string型態
      }
      return 0;
	       }
