#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   ios::sync_with_stdio(false);
    cin.tie(0);
    int num,counter=0,days,number,raqm;cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>number>>days;
        for(int index=0;index<number;index++)
        {
            cin>>raqm;
            if(index>days)
                continue;
            if(index==0)
            counter+=raqm;
            else if(index*raqm<=days)
            {
                days-=index*raqm;
                counter+=raqm;
 
 
            }
            else
            {
                counter+=min(days/index,raqm);
                days-=min(days/index,raqm)*index;
            }
 
        }
        cout<<counter<<endl;
        counter=0;
    }
    return 0;
}