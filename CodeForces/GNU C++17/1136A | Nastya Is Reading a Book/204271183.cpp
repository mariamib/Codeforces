using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
#include<map>
 
 
int main()
{
 int n, nn, num;
 vector<int>vec;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> nn >> nn;
  vec.push_back(nn);
 }
 cin >> num;
 for (auto i : vec)
 {
  if (num > i)
   n--;
  else
   break;
 }
 cout << n;
}