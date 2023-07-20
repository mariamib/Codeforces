#include<bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int num,input,a=0,counter=0,counter1=0;cin>>num;
    vector<int>arr;
    for(int i=0;i<num;i++)
    {
        cin>>input;
        arr.push_back(input);
        counter1+=input;
 
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<num;i++)
    {
        a+=arr[i];
        counter++;
        if(a>counter1/2)
            break;
    }
    cout<<counter;
 
    return 0;
}