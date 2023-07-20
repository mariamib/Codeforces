 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cmath>
#include <cstdio>
#include <cinttypes>
using namespace std;
 
int main()
{
 
 long long  numm, num1, num2, a,b;
 long double bb;
 
 cin >> numm;
 for (long long  i = 0; i < numm; i++)
 {
  cin >> a >> b;
  if (a % b == 0)
   cout << 0<<endl;
  else
  {
   if (a > b)
   {
    
    bb= (double)b;
    num1 = ceil(a / bb);
    if (num1 == 1)
     num1 = 2;
    num2 = (b * num1) - a;
    cout << num2 << endl;
 
 
 
   }
   else
    cout << b - a << endl;
  }
 }
 
}