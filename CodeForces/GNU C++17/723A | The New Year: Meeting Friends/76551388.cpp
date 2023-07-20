#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,x2=111,x3=0;
    for(int i=0;i<3;i++)
    {
        cin>>x;
        if(x>x3)
            x3=x;
        if(x<x2)
            x2=x;
 
    }
    cout<<x3-x2;
 
 
    return 0;
}