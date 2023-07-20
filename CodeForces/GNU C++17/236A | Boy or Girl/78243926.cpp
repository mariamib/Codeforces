// CPP program to find position of a character
// in a given string.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string n;
    int counter=0;
    map<char,int>arr;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(arr.find(n[i])==arr.end())
        {counter++;
        arr[n[i]]=1;
        }
 
    }
    if(counter%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
 
 
 
 
    return 0;
}