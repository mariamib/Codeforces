#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int num1,num2,counter=1;cin>>num1>>num2;
    for(int ii=1;ii<=num1;ii++)
    {   if(ii%2!=0)for(int i=1;i<=num2;i++)cout<<"#";
       else
 
        {
            for(int i=1;i<=num2;i++)
            {   if(counter%2!=0&&i==num2)
                cout<<"#";
                else if(counter%2==0&&i==1)
                    cout<<"#";
 
               else
                    cout<<".";
            }
            counter++;
 
        }
        cout<<endl;
    }
 
 }