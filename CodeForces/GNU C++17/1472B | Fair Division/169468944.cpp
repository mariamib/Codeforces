#include <iostream>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;
int main()
{
 long long int t, n;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> n;
  long int arr[100], count = 0;
  for (int i = 0; i < n; i++)
  {
   cin >> arr[i];
  }
  sort(arr, arr + n, greater<int>());
  for (int i = 0; i < n; i++)
  {
   if (arr[i] == 2 && count == 0)
    count++;
   else if (arr[i] == 2 && count == 1)
    count--;
   else if (arr[i] == 1 && (0 < i ) && arr[i - 1] == 2 && count)
   {
    if (i < n - 1)
    {
     count--;
     i++;
    }
   }
   else if (arr[i] == 1 && count)
    count--;
   
   else if (arr[i]==1 && !count)
    count++;
 
  }
  if (count)
   cout << "NO" << endl;
  else
   cout << "YES" << endl;
 }
 
}
 