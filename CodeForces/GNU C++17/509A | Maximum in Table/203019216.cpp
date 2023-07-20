using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int main()
{
 long long n;
 vector<long long>vec;
 cin >> n;
 if (n == 1)
  cout << 1;
 else
 {
  for (int i = 2; i <= n; i++)
  {
   for (int ii = 1; ii <= n; ii++)
   {
    if (i == 2)
     vec.push_back(ii);
 
    else if(ii>1)
     vec[ii-1] = vec[ii-1] + vec[ii - 2];
    if (i == n && ii == n)
     cout << vec[ii - 1] << endl;
   }
  }
 }
}