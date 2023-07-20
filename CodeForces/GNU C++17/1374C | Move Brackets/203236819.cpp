using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>
 
int main()
{
 int n, num, counter, l, r;
 char c, last;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> num;
  counter = 0;
  l = 0;
  r = 0;
  for (int i = 0; i < num; i++)
  {
 
   cin >> c;
   if (c == '(')
    l++;
   else if (c == ')' && l > 0)
    l--;
   else
    r++;
  }
  cout << r << endl;
 }
 
}