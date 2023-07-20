#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter1=0, counter=0;
    int a,num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a!=-1)
            counter1+=a;
        if(a==-1)
        {
            if(counter1==0)
                counter+=1;
                else
                    counter1-=1;
        }
    }
    cout<<counter;
 
}