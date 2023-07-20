#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int n,mx=0,mn=100,a,aa,aaa;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(mx<a)mx=a,aa=i;
        if(mn>=a)mn=a,aaa=i;
        
    }
    cout<<aa+(n-(aaa+1))-(aa>aaa)?1:0;
}