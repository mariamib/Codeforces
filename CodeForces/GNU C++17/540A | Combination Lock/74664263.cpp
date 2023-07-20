#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int num,a,b;
    cin>>num;
    string aa,bb;
    cin>>aa;
    cin>>bb;
    int counter=0;
    for(int i=0;i<num;i++)
    {
        a=aa[i]-'0';
        b=bb[i]-'0';
        if(a>b)
        {
            if(a-b>5)
                counter+=b+1+9-a;
            else
                counter+=a-b;
 
        }
        else if(b>a)
        {
            if(b-a>5)
                counter+=a+1+9-b;
            else
                counter+=b-a;
        }
 
    }
 
    cout<<counter;
    return 0;
}