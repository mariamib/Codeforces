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
 int n, n1, n2, n3, n4, sum, rank=1;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> n1 >> n2 >> n3 >> n4;
  if (i == 0)
   sum = n1 + n2 + n3 + n4;
  else
   if (sum < n1 + n2 + n3 + n4)
    rank++;
 }
 cout << rank;
}