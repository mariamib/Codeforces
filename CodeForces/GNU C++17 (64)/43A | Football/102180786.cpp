#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
long long arr[100001];
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 map<string, int>m;
 int num, count = 0; cin >> num;
 string s, ss;
 for (int i = 0; i < num; i++)
 {
  cin >> s;
  if (i == 0) ss = s;
  if (m.find(s) == m.end())
   m[s];
  else
  {
   m[s]++;
   if (m[s] > count)
   {
    count = m[s];
    ss = s;
   }
  }
 }
 cout<<ss;
 
 
 
 
 
 
}