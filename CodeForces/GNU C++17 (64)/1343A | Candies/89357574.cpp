 
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
 
 int  num1, num, count, j;
 cin >> num;
 for (int i = 0; i < num; i++)
 
 {
  cin >> num1;
  j = count = 0;
  while (true)
  {
   count += pow(2, j);
   if (num1 % count == 0&&count>1)
   {
    cout << num1 / count<<endl;
    break;
   }
   j++;
  }
 }
}
 
 
 
 
 
 
 
 
 
 