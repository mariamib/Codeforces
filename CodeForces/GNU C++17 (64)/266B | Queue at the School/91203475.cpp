#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 int num1, num2;
 string s;
 cin >> num1 >> num2;
 cin >> s;
 for (int i = 0; i < num2; i++)
 {
  for (int ii = 0; ii < num1-1; ii++)
  {
    if (s[ii] == 'B' &&s[ii+1]=='G')
    {
     s[ii] = 'G';
     s[ii+1] = 'B';
     ii++;
    
    }
   
  }
 }
 cout << s;
 
 
}
 