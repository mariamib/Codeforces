using namespace std;
#include<iostream>
#include<vector>
#include<string>
int function(int a, int b)
{
 string s1;
 for (int i = 0; i < b; i++)
  s1 += to_string(a);
 int c = stoi(s1);
 return c;
}
int main()
{
 long long num, n, count1, count2, counter, k;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> num;
  if (num < 10)
   cout << num << endl;
  else
  {
   count1 = 1;
   count2 = 2;
   counter = 0;
   k = function(count1, count2);
   count1++;
   while (k<=num)
   {
    if (k <= num)
     counter++;
    if (count1 > 9)
    {
     count1 = 1;
     count2++;
    }
    k = function(count1, count2);
    
    count1++;
   }
   cout << counter + 9 << endl;
 
  }
  
 }
 
}