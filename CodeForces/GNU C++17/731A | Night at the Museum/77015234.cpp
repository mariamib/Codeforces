#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a,word="abcdefghijklmnopqrstuvwxyz";cin>>a;
    int num,counter=0,index=0;
 
    for(int i=0;i<a.size();i++)
    {
        num=word.find(a[i]);
        if(max(num,index)-min(num,index)<=13)
        {
            counter+=max(num,index)-min(num,index);
        }
        else
        {
            counter+=26-(max(index,num)-min(index,num));
 
        }
        index=num;
    }
    cout<<counter;
}