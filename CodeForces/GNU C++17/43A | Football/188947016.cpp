#include <iostream>
#include<bits/stdc++.h>
#include<array>
#include <cmath>
using namespace std;
int main()
{
 
     int num,counter=0;
     string str,str1, str2;
     cin>>num;
     for(int i=0;i<num;i++)
     {
         cin>>str;
            if(i==0)
                str1=str;
            if(str1==str)
                counter++;
            else
            str2=str;
 
 
     }
     if(counter>num/2)
        cout<<str1;
    else
        cout<<str2;
    return 0;
}