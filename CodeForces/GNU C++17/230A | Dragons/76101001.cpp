#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int s,n,first,second,counter=0;cin>>s>>n;
    vector<pair<int,int>>arr2;
    for(int ii=0;ii<n;ii++)
    {
        cin>>first>>second;
        arr2.push_back(make_pair(first,second));
 
 
    }
    sort(arr2.begin(),arr2.end());
    for(int i=0;i<arr2.size();i++)
    {
 
        if(s>arr2[i].first)
            {s+=arr2[i].second;
            counter++;
            }
        else
            break;
 
 
    }
    if(counter==arr2.size())
        cout<<"YES";
    else
        cout<<"NO";
}