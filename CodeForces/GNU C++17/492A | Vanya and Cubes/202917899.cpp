using namespace std;
#include<iostream>
#include<vector>
int main()
{
 long long n, count = 0, counter = 0,i=0;
 cin >> n;
 while(1)
 {
  count = count + (++i);
  n -= count;
  if (n < 0)
   break;
  counter++;
 }
 cout << counter;
}