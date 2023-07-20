#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int num1,num2,counter,no,arr[55];
   cin>>num1;
   for(int i=0;i<num1;i++)
   {
       cin>>num2;
       counter=0;
       long long int arr[55];
       for(int ii=0;ii<num2;ii++)
       {
           cin>>no;
           arr[ii]=no;
       }
       sort(arr, arr + num2);
        for(int i=1;i<num2;i++)
        {
            if(arr[i]>arr[0])
                counter+=arr[i]-arr[0];
        }
        cout<<counter<<endl;
   }
    return 0;
 
}