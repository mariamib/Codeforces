#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<list>
#include<math.h>
using namespace std;
int arr[102];
 
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 string s = "GROYBIV", m = "YBIV";
 float num; cin >> num;
 for (int i=1;i<= num / 7; i++)
 {
  
  cout << s;
 
 }
 if (num - (floor(num / 7) * 7) != 0)
 {
  int ii = 0;
  for (int i = 1; i <= num - (floor(num / 7) * 7); i++)
  {
   
   cout << m[ii];
   ii++;
   if (ii == 4)
    ii = 0;
  }
 
 }
 
 
 
}