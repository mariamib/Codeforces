#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    map<long long,long long>arr;
    long long num,num1,numm,counter=0;cin>>num;
    for(long long i=0;i<num;i++)
    {    counter=0;
        arr.clear();
        cin>>num1;
        for(long long i=0;i<num1;i++)
        {
            cin>>numm;
             if(arr.find(numm)!=arr.end())
                {arr[numm]++;
                if(arr[numm]>counter)
                    counter=arr[numm];
                }
 
            else
                arr[numm]=1;
                }
         if(counter==0&&arr.size()>1)
            counter=1;
 
        if(counter<arr.size()-1)
            cout<<counter<<endl;
        else if(counter>arr.size())
            cout<<arr.size()<<endl;
        else
            cout<<arr.size()-1<<endl;
        }
 
    }
 
 