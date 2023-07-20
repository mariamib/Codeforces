#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,o=0,r=0,e=0,n=0,z=0;cin>>num;
    char a;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a=='o')
            o++;
        else if(a=='z')
            z++;
        else if(a=='e')
            e++;
        else if(a=='r')
            r++;
            else if(a=='n')
            n++;
    }
 
    while(o>0&&n>0&&e>0)
    {
        cout<<1<<" ";
        o--;
        n--;
        e--;
    }
     while(z>0&&r>0&&e>0&&o>0)
    {
        cout<<0<<" ";
        o--;
        r--;
        e--;
        z--;
    }
 
}