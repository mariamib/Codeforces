#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
long long arr[1000001];
 
int main()
{
 
 long long num1, num2, j;
 long long  count1 = 0, count2 = 0;
 map<int, pair<long long, long long>>m;
 cin >> num1;
 j = num1;
 for (int i = 1; i <= num1; i++)
 {
  cin >> num2;
  m[num2] = { i,j };
  j--;
 }
 cin >> num1;
 for (int i = 1; i <= num1; i++)
 {
  cin >> num2;
  count1 += m[num2].first;
  count2 += m[num2].second;
 }
 cout << count1 << " " << count2;
 
}