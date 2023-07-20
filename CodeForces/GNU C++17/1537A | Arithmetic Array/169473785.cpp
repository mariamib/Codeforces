#include <iostream>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
 long long int t, n, a;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> n;
  long long int count = 0;
  for (int i = 0; i < n; i++)
  {
   cin >> a;
   count += a;
  }
  if (count < n)
   cout << 1 << endl;
  else
   cout << count - n << endl;
 
 }
 
}
 