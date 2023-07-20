#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int num;
    cin>>num;
    char a,b;
    int counter=0,counter1=0;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a=='x')
            counter1++;
        else if(a!='x')
        {
            if(counter1>=3)
                counter+=counter1-2;
            counter1=0;
        }
 
    }
    if(counter1>=3)
    {
        if(counter1>=3)
            counter+=counter1-2;
    }
    cout<<counter;
    return 0;
}