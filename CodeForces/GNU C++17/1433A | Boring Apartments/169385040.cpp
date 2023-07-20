#include <iostream>
#include<set>
#include<string>
#include<cstring>
using namespace std;
int main()
{
 int t;
 char x[4];
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> x;
  if (strlen(x) == 4)
  {
   cout << (10 * (x[0] - '0')) << endl;
  }
  else if (strlen(x) == 3)
  {
   cout << (10 * (x[0] - '0'))-4 << endl;
 
  }
  else if (strlen(x) == 2)
  {
   cout << (10 * (x[0] - '0'))-7 << endl;
 
  }
  else
  {
   cout << (10 * (x[0] - '0')) - 9 << endl;
 
  }
 }
}