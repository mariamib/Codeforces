#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    string aa,bb;
    cin>>a>>b;
    map<string,string>arr;
    for(int i=0;i<b;i++)
    {
        cin>>aa>>bb;
        if(aa.size()<=bb.size())
        {
            arr[aa]=aa;
            arr[bb]=bb;
        }
        else
        {
            arr[aa]=bb;
            arr[bb]=bb;
        }
 
    }
    for(int i=0;i<a;i++)
    {
        cin>>bb;
        cout<<arr[bb]<<" ";
    }
    return 0;
}