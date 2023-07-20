#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(k<n||m<n)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}