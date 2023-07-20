#include<iostream>
#include<unordered_set>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t, n, c;
 vector<int>vec;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> n;
  vec.clear();
  for (int i = 0; i < n * 2; i++)
  {
   cin >> c;
   if (find(vec.begin(),vec.end(),c)==vec.end())
    vec.push_back(c);
  }
  for (auto i : vec)
   cout << i << " ";
  cout << endl;
 
 
 }
 
}