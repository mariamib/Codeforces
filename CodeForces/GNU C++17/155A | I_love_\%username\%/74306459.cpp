#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int counter=0;
    int num,a,b1,b2;
    cin>>num;
    map<int,int>map1;
    map<int,int>::iterator it;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(i==0)
        {
            b1=a;
            b2=a;
        }
        if(i>0)
        { it=map1.find(a);
            if(a>b1&&it==map1.end())
            {
                counter++;
                b1=a;
                map1[a]=1;
 
            }
            if(a<b2&&it==map1.end())
            {
                counter++;
                b2=a;
                map1[a]=1;
        }
            }
    }
    cout<<counter;
    return 0;
}