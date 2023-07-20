#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   string a;
    int counter=0;
    int num;
    cin>>num;
    cin>>a;
    map<char,int>map1;
    map<char,int>::iterator it;
    if(num>=26)
   {
       for(int i=0;i<num;i++)
    {   a[i]=tolower(a[i]);
        it=map1.find(a[i]);
        if(it==map1.end())
        {
            map1[a[i]]=1;
            counter++;
        }
    }
 
 
    }
    if(counter==26)
        cout<<"YES";
    else
        cout<<"NO";
}
 
 
 