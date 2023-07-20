 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
int main()
{
 
 string num;
 cin >> num;
 if (num[0] != '-')
  cout << num;
 else
 {
  if (num.size() == 3 && num[2] == '0')
   num = "0";
  else if (num[num.size() - 1] >= num[num.size() - 2])
   num = num.erase(num.size() - 1, 1);
  else
   num = num.erase(num.size() - 2, 1);
  cout << num;
 }
 
 
 
}