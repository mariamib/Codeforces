#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int num,m,n,counter=0;
    cin>>num>>m;
    vector<int>vec;
    for(long long int i=0;i<num;i++)
    {
        cin>>n;
        if(n<0)
            vec.push_back(-n);
    }
     sort(vec.begin(), vec.end() ,greater <int>());
    for(int i:vec)
    {
        counter+=i;
        m--;
        if(m==0)
            break;
    }
    cout<<counter;
    return 0;
}