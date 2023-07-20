using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 string str = "oaeiuy";
 char c , cc;
 c = '.';
 while (c != '?')
 {
  cin >> c;
  if (c != '?')
   cc = c;
 }
 if (str.find(tolower(cc))!=string::npos)
  cout << "YES";
 else
  cout << "NO";
 
}