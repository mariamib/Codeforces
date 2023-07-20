#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int counter1=0,counter2=0,a,b,c,d;cin>>a>>b>>c>>d;
    while(a>0&&c>0&&d>0)
    {
        a--;
        c--;
        d--;
        counter1++;
 
    }
    while(b>0&&a>0)
    {
        counter2++;
        b--;
        a--;
    }
    cout<<counter1*256+counter2*32;
}