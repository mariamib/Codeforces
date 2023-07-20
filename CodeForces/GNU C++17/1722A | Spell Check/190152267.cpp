#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num,no;
   string str1,str2="Timur";
   cin>>num;
   for(int i=0;i<num;i++)
   {
       cin>>no;
       cin>>str1;
       str2="Timur";
       if(no!=5)
        cout<<"NO"<<endl;
      else
      {
        for(int ii=0;ii<no;ii++)
        {
            for(int j=0;j<no;j++)
            {
                if(str1[ii]==str2[j])
                    str2[j]='.';
            }
        }
       if(str2==".....")
        cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
 
      }
   }
    return 0;
 
}