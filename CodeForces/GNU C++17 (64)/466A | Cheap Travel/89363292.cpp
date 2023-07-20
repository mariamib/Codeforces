 
#include <iostream>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cmath>
#include <cstdio>
#include <cinttypes>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
 
 int  n, m, a, b;
 cin >> n >> m >> a >> b;
 if ((b * (n / m)) + (n - ((n / m) * m)) * a <= a * n && (b * (n / m)) + (n - ((n / m) * m)) * a <= b * ceil((float)n / m))
  cout << (b * (n / m)) + (n - ((n / m) * m)) * a<<endl;
 else if (b * ceil((float)n / m) <= a * n)
  cout << (b *ceil ((float)n / m))<<endl;
 else
  cout<<a* n<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 