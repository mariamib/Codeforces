 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cmath>
#include <cstdio>
#include <cinttypes>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 
 int  num, num1, num2, arr1[101], arr2[101];
 vector<int>arr;
 cin >> num;
 for (int i = 0; i < num; i++)
 {
 
  cin >> num1 >> num2;
  arr1[i] = num1;
  arr2[i] = num2;
  if (count(arr.begin(), arr.end(), num1) == 0)
   arr.push_back(num1);
  if (count(arr.begin(), arr.end(), num2) == 0)
   arr.push_back(num2);
 
 
 }
 int counter = 0;
 for (int i :arr)
 { 
   count(arr1, arr1 + num, i);
  counter += count(arr2, arr2 + num, i)*count(arr1, arr1 + num, i);
 }
 cout << counter << endl;
}
 
 
 
 
 
 
 
 
 
 
 
 