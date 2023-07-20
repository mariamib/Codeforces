// CPP program to find position of a character
// in a given string.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int ii=0;
    string n,nn="hello";cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(ii==5)
        break;
        if(n[i]==nn[ii])
        ii++;
 
    }
    if(ii==5)
        cout<<"YES";
    else
        cout<<"NO";
 
 
 
    return 0;
}