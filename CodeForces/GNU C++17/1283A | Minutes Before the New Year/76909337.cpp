#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,h,m;cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>h>>m;
        cout<<((24-h)*60)-m<<endl;
    }
 
}