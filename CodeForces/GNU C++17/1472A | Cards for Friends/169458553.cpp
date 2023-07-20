#include <iostream>
#include<set>
#include<string>
#include<cstring>
using namespace std;
int main()
{
 long long int t, n, w, h;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> w >> h >> n;
  long long int count = 1;
  if (h % 2 == 0)
  {
   while (h % 2 == 0)
   {
    h /= 2;
    count *= 2;
    if (count == n)
     break;
   }
  }
  if (w % 2 == 0 && count < n)
  {
   while (w % 2 == 0)
   {
 
    w /= 2;
    count *= 2;
    if (count == n)
     break;
   }
  }
  if (count >= n)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
}