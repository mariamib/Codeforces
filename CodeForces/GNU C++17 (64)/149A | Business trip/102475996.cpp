#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[12];
int main()
{
 int k, count = 0, keep = 0, keep2 = 12;
 cin >> k;
 for (int i = 0; i <12 ;i++) cin >> arr[i];
 sort(arr, arr + 12, greater<>());
 for (int i = 0; i < 12; i++)
 {
  if (count < k && i == 1)
  {
   keep2 = -1;
   break;
  }
  count = 0;
  keep = 0;
  for (int j = i; j < 12; j++)
  {
   if (count < k)
   {
    count += arr[j];
    keep++;
   }
  }
  if (count >= k && keep < keep2)
   keep2 = keep;
 
 }
 cout << keep2;
 
}