using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 int num, counter1 = 0, counter2 = 0;
 cin >> num;
 string str;
 cin >> str;
 for (int i = 1; i < num; i++)
 {
  if (str[i - 1] == 'S' && str[i] == 'F')
   counter1++;
  else if (str[i - 1] == 'F' && str[i] == 'S')
   counter2++;
 }
 if (counter1 > counter2)
  cout << "YES";
 else
  cout << "NO";
 
 
 
}