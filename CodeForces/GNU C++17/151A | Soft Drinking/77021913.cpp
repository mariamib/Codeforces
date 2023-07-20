#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k, l, c, d, p, nl, np,slices,counter=0,drinks;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    slices=d*c;
    drinks=k*l;
    while(nl*n<=drinks&&slices>=n&&p>=np*n)
    {
        drinks-=nl*n;
        slices-=n;
        p-=np*n;
        counter++;
 
    }
    cout<<counter;
}