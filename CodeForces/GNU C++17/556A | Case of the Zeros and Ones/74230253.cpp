#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   string a;
int count1=0,count0=0;
int num;
cin>>num;
    cin>>a;
    for(int i=0;i<num;i++)
    {
        if(a[i]=='1')
            count1++;
        else
            count0++;
 
    }
    if(count1>=count0)
        cout<<count1-count0;
    else if(count0>count1)
        cout<<count0-count1;
 
 
    return 0;
}