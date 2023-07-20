#include <iostream>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
 long long int t, n;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> n;
  int count = 0;
  set<long long int>sett;
  bool check = false;
  while (n != 1)
  {
   
   if (n % 6 == 0)
   {
    n /= 6;
    if (sett.find(n) != sett.end()||n<=0)
    {
     check = 1;
     break;
    }
    count++;
    sett.insert(n);
   }
   else
   {
    n *= 2;
    if (sett.find(n) != sett.end()||n<=0)
    {
     check = 1;
     break;
    }
    count++;
    sett.insert(n);
   }
  }
   if (check)
   cout << -1 << endl;
   else
   cout << count << endl;
 
 
 }
}
 