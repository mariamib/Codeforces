#include <iostream>
#include<bits/stdc++.h>
#include<array>
#include <cmath>
using namespace std;
int main()
{
 
     int num,count1,count2;
     string str;
     cin>>num;
     for(int i=0;i<num;i++)
     {
         count1=0; count2=0;
        cin>>str;
        for(int j=0;j<str.size();j++)
        {
           if(j<3)
           count1+= int(str[j]-'0');
           else
            count2+=int(str[j]-'0');
 
        }
          if(count1==count2)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
     }
 
    return 0;
}