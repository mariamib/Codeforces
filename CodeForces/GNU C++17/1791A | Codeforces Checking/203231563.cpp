using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>
 
int main()
{
 string str = "codeforces";
 char c;
 int n;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> c;
  if (str.find(c) != string::npos)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
}