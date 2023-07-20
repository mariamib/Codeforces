#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
long long arr[1000000];
int main()
{
 std::ios::sync_with_stdio(0);
 std::cin.tie(0);
 long long int n, m, a;
 long long int  count(0);
 cin >> n >> m;
 bool check = false;
 for (long long int i = 0; i < n; i++)
  cin >> arr[i];
 for (long long int i = 0; i < n; i++)
 {
  if (arr[i] < 0 && m>0)
  {
   arr[i]*= -1;
   m--;
  }
  else
   break;
 }
 sort(arr, arr + n);
 if (m > 0)
 {
  if (m % 2 != 0)
   arr[0] *= -1;
 }
 for (auto i : arr)
  count += i;
 
 cout << count;
 }
 
 