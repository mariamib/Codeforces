#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,a,counter=0,i;cin>>k;
    vector<int>arr;
    for(int i=0;i<12;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),greater<int>());
for( i=0;i<12;i++)
{    counter+=arr[i];
        if(counter>=k)
 
            break;
 
 
}
if(k==0)
    cout<<0;
else if(counter>=k)
    cout<<i+1;
else
    cout<<-1;
    }
 
 