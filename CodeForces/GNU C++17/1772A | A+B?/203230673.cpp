using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>
 
int main()
{
 int num1, num2, n;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  bool first = 1;
  string str, str1, str2;
  cin >> str;
  for (int i = 0; i < str.size(); i++)
  {
   if (isdigit(str[i]) && first)
    str1 += str[i];
   else if (first)
    first = 0;
   else
    str2 += str[i];
  }
  istringstream(str1) >> num1;
  istringstream(str2) >> num2;
  cout << num1+num2 << endl;
 
 
 }
}