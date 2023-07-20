#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a;
    cin>>num;
    vector<int>arr;
    bool output=true;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a!=0)
        {
            arr.push_back(a);
        }
 
    }
    sort(arr.begin(),arr.end());
 
    for(int i3=0;i3+2<num;i3++)
    {
        if(arr[i3]+arr[i3+1]>arr[i3+2])
        {
            output=false;
            break;
        }
    }
    if(output)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}