#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long num,a;cin>>num>>a;
    long long c=0;
    c=ceil(num/2.0);
 
           if(a<=c)
            cout<<(a*2)-1;
            else
                cout<<(a-c)*2;
 
 
 
    return 0;
}