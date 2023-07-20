#include <iostream>
#include<set>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<list>
#include<cmath>
using namespace std;
int main()
{
 long long int t, n;
 cin >> t;
 for (int i = 0; i < t; i++)
 {
  cin >> n;
 cout << n -(long long int) round((  double)n / 3.0) * 2 << " " << (long long int)round((double) n / 3.0)<< endl;
 
 }
 
}
 