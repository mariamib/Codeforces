using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 int num1, num2, n, nn;
 cin >> num1 >> num2;
 string str;
 char x, xx;
 cin >> str;
 for (int i = 1; i <= num2; i++)
 {
  cin >> n >> nn >> x >> xx;
  for (int ii = n; ii <= nn; ii++)
  {
   if (str[ii-1] == x)
    str[ii-1] = xx;
  }
 }
 cout << str;
 
 
 
}