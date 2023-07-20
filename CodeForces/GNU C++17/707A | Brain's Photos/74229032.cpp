#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int num1,num2;
    char a;
    bool output=true;
    cin>>num1>>num2;
    for(int i=0;i<num1;i++)
    {
        for(int i=0;i<num2;i++)
        {
            cin>>a;
 
 
        if(a=='M'||a=='Y'||a=='C')
            output=false;
        }
    }
    if(output)
        cout<<"#Black&White";
    else
        cout<<"#Color";
 
 
    return 0;
}