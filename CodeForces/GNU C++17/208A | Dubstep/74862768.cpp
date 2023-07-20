#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string input;cin>>input;
    vector<string>arr;
    string s="";
    for(int i=0;i+1<=input.size();i++)
    {
        if(input[i]=='W'&&input[i+1]=='U'&&input[i+2]=='B')
        {
            i+=2;
            if(s!="")
            {
                arr.push_back(s);
                s="";
            }
 
        }
        else
            s+=input[i];
 
    if(i==input.size()-1&&s!="")
        arr.push_back(s);
 
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}