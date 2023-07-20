#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string input1,input2;
    cin>>input1;
    cin>>input2;
    reverse(input1.begin(),input1.end());
    if(input2==input1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}