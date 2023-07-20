#include <iostream>
#include<bits/stdc++.h>
#include<array>
#include <cmath>
using namespace std;
int main()
{
 
     int num;
     string str;
     cin>>num;
     for(int i=0;i<num;i++)
     {
         cin>>str;
        for (int x=0; x<str.size(); x++)
                str[x]=tolower(str[x]);
         if(str=="yes")
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
 
     }
    return 0;
}