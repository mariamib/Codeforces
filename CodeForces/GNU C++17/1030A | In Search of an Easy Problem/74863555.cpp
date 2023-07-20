#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;cin>>num;
    int input;
    bool output=true;
    for(int i=0;i<num;i++)
    {
        cin>>input;
        if(input==1)
            output=false;
    }
    if(!output)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}