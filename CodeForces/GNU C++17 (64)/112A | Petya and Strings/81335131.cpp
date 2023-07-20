#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string one,two;
    cin>>one>>two;
    transform(one.begin(), one.end(), one.begin(),
    [](unsigned char c){ return std::tolower(c); });
    transform(two.begin(), two.end(), two.begin(),
    [](unsigned char c){ return std::tolower(c); });
    if(one>two)
        cout<<1;
    else if(two>one)
        cout<<-1;
    else
        cout<<0;
 
    return 0;
}