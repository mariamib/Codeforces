#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long num,counter=0;cin>>num;
    for(long long i=1;i<=num/2;i++)
    {
        if(num%i==0)
            counter++;
    }
    cout<<counter;
}