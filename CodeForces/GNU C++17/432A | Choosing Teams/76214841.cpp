#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int num1,num2,input,counter=0,teams=0;cin>>num1>>num2;
for(int i=0;i<num1;i++)
{
    cin>>input;
    if(input+num2<=5)
        counter++;
    if(counter==3)
        {teams++;
        counter=0;
        }
}
cout<<teams;
}