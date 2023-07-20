using namespace std;
#include<iostream>
#include<vector>
int main()
{
 long long num, n;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  cin >> num;
  while (num % 2 == 0)
  {
   num /= 2;
  }
  if (num!=1)
   cout << "YES" << endl;
  else
   cout << "NO" << endl;
 }
 
}