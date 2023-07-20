#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    if(ceil((a1+a2+a3)/5.0)+ceil((b1+b2+b3)/10.0)<=n)
        cout<<"YES";
    else
        cout<<"NO";
}