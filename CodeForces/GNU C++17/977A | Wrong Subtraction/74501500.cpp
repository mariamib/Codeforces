#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   string num1;
    int num2,x;
    cin>>num1>>num2;
    stringstream(num1)>>x;
    for(int i=0;i<num2;i++)
    {   int a=num1.size() ;
        
        if(num1[a-1]!='0')
           {
               x-=1;
               num1=to_string(x);
           }
           else
            {
                x=x/10;
                num1=to_string(x);
            }
    }
    cout<<x;
 
 
}