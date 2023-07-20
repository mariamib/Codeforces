#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 int num1, num2, num;
 cin >> num;
 for (int i = 0; i < num; i++)
 {
  int counter = 0, counter2 = 0;
  cin >> num1;
  for (int ii = 0; ii < num1; ii++)
  {
   cin >> num2;
   if ((num2 % 2 == 0 && (ii) % 2 != 0))
    counter++;
   else if (num2 % 2 != 0 && (ii) % 2 == 0)
    counter2++;
  }
  if (counter == counter2)
   cout << counter << endl;
  else
   cout << -1 << endl;
 
 }
 
 
}
 