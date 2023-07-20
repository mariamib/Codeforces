#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,aaa;cin>>num;
    int counter=0,counter2=0,a=0,aa=0;
    for(int i=1;i<=num;i++)
    {
        cin>>aaa;
        if(aaa%2==0)
        {
            counter++;
            a=i;
        }
        else
        {
            counter2++;
            aa=i;
        }
    }
    if(counter==1)
        cout<<a;
    else
        cout<<aa;
    return 0;
}