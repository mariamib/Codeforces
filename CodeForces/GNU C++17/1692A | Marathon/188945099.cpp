#include <iostream>
#include<bits/stdc++.h>
#include<array>
#include <cmath>
using namespace std;
int main()
{
 
     int num,a,b,c,d,counter;
     cin>>num;
     for(int i=0;i<num;i++)
     {
         counter=0;
        cin>>a>>b>>c>>d;
            if(b>a)
                counter++;
            if(c>a)
                counter++;
            if(d>a)
                counter++;
            cout<<counter<<endl;
 
     }
    return 0;
}