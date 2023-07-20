#include<iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;
 
int main()
{
 long long  int n, m, a, count = 0;
 set<long long int>s;
 cin >> n;
 for (long long int i = 0; i < n; i++)
 {
  s.clear();
  cin >> m;
  for (long long int ii = 0; ii < m; ii++)
  {
   cin >> a;
   count = s.size();
   s.insert(a);
   if (count == s.size())
    s.insert(a + 1);
  }
  cout << s.size() << endl;
 }
 
}