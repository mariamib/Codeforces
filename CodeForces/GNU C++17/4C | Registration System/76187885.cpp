#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;cin>>num;
    string input;
    map<string,int>arr;
    map<string,int>::iterator it;
    for(int i=0;i<num;i++)
    {
        cin>>input;
        it=arr.find(input);
        if(it==arr.end())
            {cout<<"OK"<<endl;
            arr[input]=0;
            }
        else
        {
            arr[input]++;
            input+=to_string(arr[input]);
            cout<<input<<endl;
 
        }
    }
}