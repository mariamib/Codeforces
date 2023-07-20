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
 vector<int>vec;
 int n, nn;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> nn;
  vec.push_back(nn);
 }
 sort(vec.begin(), vec.end());
 for (int i =1; i <n; i++)
 {
  if (i % 2 == 0)
   vec.erase(vec.begin());
  else
   vec.pop_back();
 
 }
 cout << vec[0];
}