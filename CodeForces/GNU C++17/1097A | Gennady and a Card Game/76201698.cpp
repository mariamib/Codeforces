#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a,b;cin>>a;
    bool output=false;
    for(int i=1;i<=5;i++)
    {
        cin>>b;
        if(a[0]==b[0]||a[1]==b[1])
            output=true;
    }
    if(output)
        cout<<"YES";
    else
        cout<<"NO";
}