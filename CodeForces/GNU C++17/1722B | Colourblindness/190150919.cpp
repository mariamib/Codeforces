#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num,no;
   string str1,str2;
   cin>>num;
   for(int i=0;i<num;i++)
   {
       cin>>no;
       cin>>str1>>str2;
       for(int ii=0;ii<no;ii++)
       {
           if(str1[ii]=='G')
               str1[ii]='B';
           if(str2[ii]=='G')
             str2[ii]='B';
       }
       if(str1==str2)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }
    return 0;
 
}