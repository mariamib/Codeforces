#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int counter=0,num;cin>>num;
    string s;
    for(int i=0;i<num;i++)
    {
        cin>>s;
        if(s=="Icosahedron")
            counter+=20;
        else if(s=="Dodecahedron")
            counter+=12;
        else if(s=="Cube")
            counter+=6;
        else if(s=="Tetrahedron")
            counter+=4;
        else
            counter+=8;
 
    }
    cout<<counter;
 
 
    }