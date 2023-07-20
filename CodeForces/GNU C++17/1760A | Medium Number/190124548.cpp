#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num,a,b,c;
  cin>>num;
  for(int i=0;i<num;i++)
  {
      cin>>a>>b>>c;
      if(a>min(b,c)&& a<max(b,c))
        cout<<a<<endl;
      else if(b>min(a,c)&& b<max(a,c))
        cout<<b<<endl;
      else
        cout<<c<<endl;
  }
    return 0;
 
}