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
 int n, nn;
 cin >> n >> nn;
 char c;
 string str1, str2;
 for (int i = 0; i < n; i++)
 {
  cin >> c;
  str1 += c;
 }
 for (int i = 0; i < nn; i++)
 {
  cin >> c;
  str2 += c;
 }
 for (auto i : str1)
 {
  if (str2.find(i) != string::npos)
  {
   cout << i << " ";
  }
 }
}