#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,d,counter=0;cin>>a>>b>>c>>d;
    string t;cin>>t;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='1')
            counter+=a;
        else if(t[i]=='2')
            counter+=b;
        else if(t[i]=='3')
            counter+=c;
        else
            counter+=d;
 
 
    }
     cout<<counter<<endl;
}