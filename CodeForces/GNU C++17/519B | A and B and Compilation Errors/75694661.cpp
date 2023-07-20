#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,a,counter=0,counter1=0,counter2=0;cin>>num;
    for(int i=0;i<3;i++)
    {
        for(int ii=0;ii<num;ii++)
        {
            cin>>a;
            if(i==0)
                counter+=a;
            else if(i==1)
                counter1+=a;
            else
            {
                counter2+=a;
            }
        }
        num-=1;
 
    }
    cout<<counter-counter1<<endl;
    cout<<counter1-counter2;
 
 
    }