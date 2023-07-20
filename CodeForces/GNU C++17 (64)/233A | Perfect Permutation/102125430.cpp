#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
 int num, i = 1, n = 0, m = -1;
 cin >> num;
 if (num % 2 == 0)
 {
  while (i <= num)
  {
   if (i % 2 != 0)
   {
    n += 2;
    cout << n << " ";
 
   }
   else
   {
 
    m += 2;
    cout << m << " ";
   }
   i++;
  }
 }
 else
  cout << -1;
 
}