#include <iostream>
#include<set>
using namespace std;
int main()
{
 long long int t, n, a, max, min;
 cin >> t;
 for (long long int i = 0; i < t; i++)
 {
  cin >> n;
  set<long long int>sett;
  for (long long int ii = 0; ii < n; ii++)
  {
   cin >> a;
   sett.insert(a);
  }
  cout << *sett.rbegin() - *sett.begin() << endl;
  
 
  
 }
}