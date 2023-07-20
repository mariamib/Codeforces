#include<iostream>
using namespace std;
long long arr[100001];
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 long long n, m, count = 0;
 
 cin >> n >> m;
 for (long long i = 1; i <= m; i++)cin >> arr[i];
 for (long long i = 1; i <= m; i++)
 {
  if (i == 1)count += arr[i] - 1;
  else if (arr[i ] >= arr[i-1])
   count += arr[i] - arr[i - 1];
  else
   count += (n - arr[i - 1]) + arr[i];
 }
 cout << count;
 
}