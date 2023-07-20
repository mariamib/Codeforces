#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    set<char>arr;
    int counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='{'&&s[i]!='}'&&s[i]!=','&&s[i]!=' ')
            {
                arr.insert(s[i]);
            }
    }
    cout<<arr.size();
 
    return 0;
}