#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int num1,num2,counter1,counter2,no;
   cin>>num1;
   for(int i=0;i<num1;i++)
   {
       cin>>num2;
       counter1=0;counter2=0;
       for(int ii=0;ii<num2*2;ii++)
       {
           cin>>no;
           if(no%2==0)
            counter1++;
           else
            counter2++;
       }
       if(counter1==counter2)
        cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
   }
    return 0;
 
}