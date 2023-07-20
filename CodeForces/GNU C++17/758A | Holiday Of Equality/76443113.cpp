#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,maxx=0,counter=0;cin>>num;
    vector<int>arr;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a>maxx)
            maxx=a;
        arr.push_back(a);
    }
    for(int i=0;i<num;i++)
    {
        counter+=maxx-arr[i];
    }
    cout<<counter;
 
 
 
}