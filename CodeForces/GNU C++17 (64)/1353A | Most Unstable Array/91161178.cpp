#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 long long num1, num2, num;
 cin >> num;
 for (long long i = 0; i < num; i++)
 {
  cin >> num1 >> num2;
  if (num1 == 1)
   cout << 0 << endl;
  else if (num1 == 2)
   cout << num2 << endl;
  else
  {
   num1 = num2 * 2;
   cout << num1 << endl;
  }
   
 }
 
}
 