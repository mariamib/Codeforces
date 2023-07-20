#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   ios::sync_with_stdio(false);
    cin.tie(0);
    long long num,number;cin>>num>>number;
    long long counter=0;
    for(int i=1;i<=num;i++)
    {
        if(number<=i*num&&number%i==0)
            counter++;
    }
    cout<<counter<<endl;
    return 0;
}