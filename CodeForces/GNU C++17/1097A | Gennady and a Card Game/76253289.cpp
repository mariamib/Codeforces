#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input,input2;cin>>input;
    bool output=false;
    for(int i=0;i<5;i++)
    {
        cin>>input2;
        if(input[0]==input2[0]||input[1]==input2[1])
            output =true;
 
    }
    if(output)
        cout<<"YES";
    else
        cout<<"NO";
 
 
 
}