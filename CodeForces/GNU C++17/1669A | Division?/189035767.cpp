#include <iostream>
#include<bits/stdc++.h>
#include<array>
#include <cmath>
using namespace std;
int main()
{
long long int num,m;
    cin>>num;
    for(long long int i=0;i<num;i++)
    {
        cin>>m;
        if(m<=1399)
            cout<<"Division 4"<<endl;
        else if(m>=1900)
            cout<<"Division 1"<<endl;
        else if(m>=1600&&m<=1899)
            cout<<"Division 2"<<endl;
        else
            cout<<"Division 3"<<endl;
 
    }
 
    return 0;
}