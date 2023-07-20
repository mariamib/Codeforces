#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,n,counter=0,num;cin>>num;
    for(int i=0;i<num;i++)
    {cin>>a>>b>>c>>n;
    int maxx=max(a,b); maxx=max(maxx,c);
    counter=0;
    counter+=maxx-a;
    counter+=maxx-b;
    counter+=maxx-c;
    if(counter==n)
        cout<<"YES"<<endl;
    else if(counter<n)
    {
        if((n-counter)%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
    else
        cout<<"NO"<<endl;
    }
 
 
 
}