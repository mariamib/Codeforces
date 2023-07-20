using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 int n, num;
 char c, cc;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> num;
  cc = '0';
  for (int i = 0; i < num; i++)
  {
   cin >> c;
   if (c > cc)
    cc = c;
  }
  cout << (cc - 96) << endl;
 }
}