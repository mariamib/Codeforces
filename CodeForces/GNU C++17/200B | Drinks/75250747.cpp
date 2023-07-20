#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,a;cin>>num;
    int b=0;
    for(int i=0;i<num;i++)
    {   cin>>a;
        b+=a;
    }
    cout<<fixed<<setprecision(12)<<b/(double)num;
    return 0;
}