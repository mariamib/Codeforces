using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
#include<map>
 
 
int main()
{
 map<string,string>mp= { {"purple","Power"},{"green","Time"},{"blue","Space"},{"orange","Soul"},{"red","Reality"},{"yellow","Mind"} };
 int n;
 cin >> n;
 string str;
 for (int i = 0; i < n; i++)
 {
  cin >> str;
  if (mp.find(str) != mp.end())
   mp.erase(mp.find(str));
 }
 cout << mp.size() << endl;
 for (auto i:mp)
 {
  cout << i.second << endl;
 }
}