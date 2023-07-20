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
 int n, nn, save1 = 0, save2 = 0;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> nn;
  if (nn > save1)
   save1 = nn;
 }
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> nn;
  if (nn > save2)
   save2 = nn;
 }
 cout << save1 << " " << save2;
}