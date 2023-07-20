#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    set<long long>arr;
    long long a,b,c,d;cin>>a>>b>>c>>d;
    arr.insert(a);arr.insert(b);arr.insert(c);arr.insert(d);
    cout<<4-arr.size();
    return 0;
}