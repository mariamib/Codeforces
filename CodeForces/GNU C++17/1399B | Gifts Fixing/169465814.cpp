#include <iostream>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 long long int t, n;
 cin >> t;
 for (long long int i = 0; i < t; i++)
 {
  cin >> n;
  long long int arr1[50], arr2[50], count = 0, min1 = 10000000000, min2 = 10000000000;
  for (int i = 0; i < n; i++)
  {
   cin >> arr1[i];
   if (arr1[i] < min1)
    min1 = arr1[i];
  }
  for (int i = 0; i < n; i++)
  {
   cin >> arr2[i];
   if (arr2[i] < min2)
    min2 = arr2[i];
  }
  for (int i = 0; i < n; i++)
  {
   if ((arr1[i] > min1) && (arr2[i] > min2))
    count += max((arr1[i] - min1), (arr2[i] - min2));
   else if (arr1[i] > min1)
    count += arr1[i] - min1;
   else if (arr2[i] > min2)
    count += arr2[i] - min2;
  }
  cout << count << endl;
  
 
 }
}
 