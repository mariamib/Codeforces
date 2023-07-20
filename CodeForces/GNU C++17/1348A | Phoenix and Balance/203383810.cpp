using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
 
 
int main()
{
 int n, counter1, counter2, num,count;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> num;
  counter1 = 0; counter2 = 0;
  count = 0;
  for (int i = 1; i <= num; i++)
  {
   if (count < (num / 2) -1)
   {
    counter1 += pow(2, i);
    count++;
   }
   else if (i == num)counter1 += pow(2, i);
   else if (i == num - 1)counter2 += pow(2, i);
   else
   {
    counter2 += pow(2, i);
    count++;
   }
  }
  
  cout << abs(counter1 - counter2) << endl;
 }
 
}