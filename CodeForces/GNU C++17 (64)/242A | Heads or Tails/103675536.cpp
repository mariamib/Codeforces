#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<list>
using namespace std;
 
int main()
{ 
 list<pair<int, int>>l;
 int x, y, a, b;
 cin >> x >> y >> a >> b;
 for (int i = a; i <= x; i++)
 {
  for (int ii = b; ii <= y; ii++)
  {
   if (i != ii&&i>ii)
    l.push_back(make_pair(i, ii));
  }
 }
 cout << l.size() << endl;
 for (auto i : l)
  cout << i.first << " " << i.second << endl;
}