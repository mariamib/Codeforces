#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,n,x;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>n>>x;
        if(n==1)
            cout<<1<<endl;
        else
            cout<<ceil((float)(n-2)/x)+1<<endl;
    }
    return 0;
 
}