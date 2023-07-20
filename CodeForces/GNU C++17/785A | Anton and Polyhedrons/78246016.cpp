// CPP program to find position of a character
// in a given string.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,counter=0;cin>>num;
    string a;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a=="Tetrahedron")
            counter+=4;
       else if(a=="Cube")
            counter+=6;
       else  if(a=="Octahedron")
            counter+=8;
       else if(a=="Dodecahedron")
            counter+=12;
        else
            counter+=20;
 
 
    }
    cout<<counter;
 
 
 
    return 0;
}