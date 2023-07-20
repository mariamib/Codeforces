#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string one,two;
    cin>>one;
    cin>>two;
    string s="";
    for(int i=0;i<one.size();i++)
    {
        if(one[i]=='1'&&two[i]=='0'||one[i]!='1'&&two[i]!='0')
        {
            s+="1";
        }
        else
            s+="0";
    }
    cout<<s;
    return 0;
}