 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
int main()
{
 int num, input;
 cin >> num;
 for (int i = 0; i < num; i++)
 {
  cin >> input;
  int counter = 0,counter2=0;
  if (input/2 % 2 != 0)
   cout << "NO" << endl;
  else
  {
   cout << "YES" << endl;
   for (int i = 2; i <= input; i+=2)
   {
    cout << i << " ";
    
   }
   
   for (int i = 1; i < input ; i+=2)
   {
    counter2++;
    if (i + 1 == input )
     cout << i+ counter2 << " ";
    else
    cout << i << " ";
    
    
   }
   cout << endl;
   
  }
 
 }
 
}