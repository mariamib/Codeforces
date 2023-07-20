#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,a,x;cin>>num;
    map<int ,int>arr;
    map<int,int>::iterator it;
    int counter=0,b=0;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        it=arr.find(a);
        if(it==arr.end())
        {
            arr[a]=1;
            counter++;
        }
        else
        {
            arr[a]++;
        }
 
            if(b<arr[a])
                b=arr[a];
    }
   cout<<b<<" "<<counter;
 
    return 0;
}