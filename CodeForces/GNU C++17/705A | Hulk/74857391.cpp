#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;cin>>num;
   string s="";
    for(int i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            s+="I hate";
        }
        else
        {
            s+="I love";
        }
        if(i<num)
            s+=" that ";
 
    }
    s+=" it";
    cout<<s;
    return 0;
}