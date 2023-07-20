#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,counter;
    string str,check;
    cin>>num1;
    for(int i=0;i<num1;i++)
    {
        cin>>num2>>str;
        counter=0;
        check="";
        for(int ii=0;ii<num2;ii++)
        {
            if(check.find(str[ii])!=string::npos)
                counter++;
 
            else
            {
                counter+=2;
                check+=str[ii];
            }
 
        }
        cout<<counter<<endl;
    }
    return 0;
 
}