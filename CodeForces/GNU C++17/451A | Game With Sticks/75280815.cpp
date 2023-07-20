#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,b;cin>>n>>b;
    if(n<=b)
    {
        if(n%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
 
    }
    else
    {
        if(b%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
    }
    return 0;
}