#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,s1,s2,s3,s4;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>s1>>s2>>s3>>s4;
        if(max(s1,s2)<min(s3,s4)||max(s3,s4)<min(s1,s2))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}