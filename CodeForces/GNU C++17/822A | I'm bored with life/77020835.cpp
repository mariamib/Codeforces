#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,one=1;cin>>a>>b;
    for(int i=1;i<=min(a,b);i++)
    {
        one*=i;
    }
    cout<<one;
}