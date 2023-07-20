using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 double n, a, b, c, d, k, x, xx;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> a >> b >> c >> d >> k;
  x = ceil(a / c);
  xx = ceil(b / d);
  if (x == 0)
   x = 1;
  if (xx == 0)
   xx = 1;
  if (x + xx <= k)
   cout <<x << " " <<xx << endl;
  else
   cout << -1 << endl;
 }
}