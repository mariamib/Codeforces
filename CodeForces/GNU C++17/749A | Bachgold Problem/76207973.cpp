#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;cin>>num;
    cout<<num/2<<endl;
    if(num%2==0)
{
    for(int i=0;i<num/2;i++)
    {
        cout<<2<<" ";
    }
}
else
{
    for(int i=0;i<(num-3)/2;i++)
    {
        cout<<2<<" ";
    }
    cout<<3;
}
}