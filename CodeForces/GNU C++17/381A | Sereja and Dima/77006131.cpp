#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,a,b,i=1,counter1=0,counter2=0;cin>>num;
    vector<int>arr;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    while(arr.size()!=0)
    {
        if(arr.size()==1)
        {
            b=arr[0];
            arr.pop_back();
        }
        else if(arr[0]>=arr[arr.size()-1])
        {
            b=arr[0];
            arr.erase(arr.begin());
        }
        else
        {
            b=arr[arr.size()-1];
            arr.pop_back();
        }
        if(i%2!=0)
            counter1+=b;
        else
            counter2+=b;
        i++;
 
    }
 
    cout<<counter1<<" "<<counter2;
}