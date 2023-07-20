#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   long long int num ,n1,n2,diff,countt;
   cin>>num;
   for(long long int i=0;i<num;i++)
   {
       cin>>n1>>n2;
       countt=0;
       diff=max(n1,n2)-min(n1,n2);
       if(diff>10)
       {
           countt=diff/10;
           diff=diff % 10;
       }
       if(diff>0)
        countt++;
 
        cout<<countt<<endl;
 
   }
 
    return 0;
}