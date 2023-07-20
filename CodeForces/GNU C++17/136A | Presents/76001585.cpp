#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,input;cin>>num;
    map<int,int>arr;
    for(int i=1;i<=num;i++)
    {
        cin>>input;
        arr[input]=i;
    }
    for(int i=1;i<=num;i++)
    {
        cout<<arr[i]<<" ";
    }
 
 
    }