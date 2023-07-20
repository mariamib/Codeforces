#include<algorithm>
#include <iostream>
#include<vector>
#include<map>
using namespace std;
 
int main()
{
 int num, n,a,b,j;
 string s = "abcdefghijklmnopqrstuvwxyz", str;
 cin >> num;
 for (int i = 0; i < num; i++)
 {
  cin >> n >> a >> b;
  str = "";
  while (true)
  {
   
   if (a == 1)
   {
    for (int i = 0; i < n; i++)
    {
     str += s[0];
    }
   }
   if (str.size() == n)
    break;
   
   else
   {
    j = 0;
    for (j = 0; j < b; j++)
    {
     str += s[j];
     if (str.size() == n)
      break;
 
 
    }
    if (str.size() == n)
     break;
    for (int ii = 0; ii < a - b; ii++)
    {
     str += s[j - 1];
     if (str.size() == n)
      break;
 
    }
   }
   }
  
  cout << str << endl;
 }
 
 
}