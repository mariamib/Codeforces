#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100001];
int main()
{
 long long t, n, count = 1, times = 0;
 cin >> t;
 for (long long i = 0; i < t; i++)
 {
  count = 1; times = 0;
  cin >> n;
  for (long long i = 0; i < n; i++) 
   cin >> arr[i];
  sort(arr, arr + n);
 
 
  for (long long i = 0; i < n; i++)
  {
   if (arr[i] <= count)
    times = i + 1;
   count++;
  }
  cout << times + 1 << endl;
 }
 
}