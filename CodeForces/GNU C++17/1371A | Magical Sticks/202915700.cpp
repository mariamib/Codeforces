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
  num--;
  if (num <= 1)
   num = 0;
  else
   num /= 2;
  cout << num + 1 << endl;
 }
 
}