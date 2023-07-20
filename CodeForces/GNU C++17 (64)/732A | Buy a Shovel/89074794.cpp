 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
int main()
{
 int k, r;
 cin >> k >> r;
 ostringstream ostr;
 ostr << k;
 string kstring;
 char me = r + '0';
 for (int i = 1; true; i++)
 {
  ostr << k * i;
  kstring = ostr.str();
  if (k * i % 10 == 0 || kstring[kstring.size() - 1] == me)
  {
   cout << i;
   break;
  }
 }
 
}