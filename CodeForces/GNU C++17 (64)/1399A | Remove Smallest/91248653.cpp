#include<algorithm>
#include <iostream>
#include<vector>
#include<map>
using namespace std;
 
int main()
{
 int num, num1, num2, arr[52];
 map<int, int>a;
 
 cin >> num;
 for (int i = 0; i < num; i++)
 {
  cin >> num1;
  int counter = 0;
  a.clear();
  for (int ii = 0; ii < num1; ii++)
  {
   cin >> arr[ii];
   
  }
  sort(arr, arr + num1);
  for (int i = 0; i < num1-1; i++)
  {
   if (arr[i] == arr[i + 1] - 1 || arr[i] == arr[i + 1])
    counter++;
  }
 
  if (num1 - counter == 1 || num1 - counter == 0)
   cout << "YES" <<endl;
  else
   cout << "NO" <<endl;
 
  
  
 }
 
}