#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,number;cin>>num>>number;
    string s="";
    for(int i=0;i<num;i++)
    {
        if(number==10)
        {
            if(num==1)
               {
                   s+='-';
                   s+='1';
 
               }
            else if(i+1==num)
            {
                s+='10';
                break;
            }
            else
                s+='1';
        }
        else if(i<num+1)
        s+=number+'0';
    }
    cout<<s;
    return 0;
}