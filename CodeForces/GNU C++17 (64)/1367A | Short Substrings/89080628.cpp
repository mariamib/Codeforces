 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
int main()
{
 int num;
 cin >> num;
 string input;
 for (int i = 0; i < num; i++)
 {
  cin >> input;
  cout << input[0];
  for (int i = 1; i < input.size(); i+=2)
  {
   cout << input[i];
  }
  cout << endl;
 
 }
 
}