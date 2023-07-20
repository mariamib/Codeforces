#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,aa,b,num;
    map<int,int>arr;
    map<int,int>::iterator it;
    int counter=0;
    cin>>num;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>aa;
        it=arr.find(aa);
        if(it==arr.end())
        {
            arr[aa]=1;
            counter++;
        }
    }
    cin>>b;
     for(int i=0;i<b;i++)
    {
        cin>>aa;
        it=arr.find(aa);
        if(it==arr.end())
        {
            arr[aa]=1;
            counter++;
        }
    }
    if(counter==num)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}