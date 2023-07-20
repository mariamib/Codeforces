#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    int h=0;
     while(1)
{
    a=a*3;
    b=b*2;
    h++;
    if(a>b)
    {
        cout<<h;
        break;
    }
 
}
    return 0;
}