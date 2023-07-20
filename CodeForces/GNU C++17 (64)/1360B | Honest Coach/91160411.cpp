#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 int num1, num2, arr[1001];
 cin >> num1;
 for (int i = 0; i < num1; i++)
 {
  int counter = 1000;
  cin >> num2;
  for (int ii = 0; ii < num2; ii++)
  {
   cin >> arr[ii];
 
  }
  sort(arr, arr + num2);
  for (int i=1;i<num2;i++)
  {
   if (arr[i] - arr[i - 1] < counter)
    counter = arr[i] - arr[i - 1];
   if (arr[i] - arr[i - 1] == 0)
    break;
 
  }
  cout << counter << endl;
 }
}
 