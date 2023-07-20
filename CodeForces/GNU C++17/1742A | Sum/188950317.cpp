#include <iostream>
#include<bits/stdc++.h>
#include<array>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int a,b,c;
    for(int i=0;i<num;i++)
    {
        cin>>a>>b>>c;
        if(a==c+b||c==a+b||b==a+c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
 
    return 0;
}