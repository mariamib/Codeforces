#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
    cin>>s;
    int counter=0;
    for(int i = 0; i < s.size() ;i++)
    {
        if(s[i]=='7'||s[i]=='4')
 
 
            counter++;
    }
    if(counter==7||counter==4)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}