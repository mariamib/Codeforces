using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 int num;
 cin >> num;
 if (num % 4 == 1)
  cout << 0 << " A";
  else
  {
  int i = 2;
  char l1='}', l2='}', l3='}';
  while (i >=0)
  {
   num += i;
   if (num % 4 == 1)
   {
    if (i == 0)
     l1 = 'A';
    else if (i == 1)
     l2 = 'A';
    else
     l3 = 'A';
   }
   else if (num % 4 == 3)
   {
    if (i == 0)
     l1 = 'B';
    else if (i == 1)
     l2 = 'B'; 
    else
     l3 = 'B';
   }
   else if (num % 4 == 2)
   {
 
    if (i == 0)
     l1 = 'C';
    else if (i == 1)
     l2 = 'C';
    else
     l3 = 'C';
   }
   else if (num % 4 == 0)
   {
 
    if (i == 0)
     l1 = 'D';
    else if (i == 1)
     l2 = 'D';
    else
     l3 = 'D';
   }
   num -= i;
   i--;
  }
  if ((int)l1 <= (int)l2 && (int)l1 <= (int)l3)
   cout << 0 << " "<<l1;
  else if ((int)l2 <=(int)l3 &&(int) l2 <= (int)l1)
   cout << 1 <<" "<<l2;
  else
   cout << 2 <<" "<<l3;
 }
}