#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int num;
    cin>>num;
    bool output=true;
    string arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>a;
        pair<char,char>x;
        if(a[0]=='O'&&a[1]=='O'&&output==true)
        {
            a[0]='+';
            a[1]='+';
            output=false;
        }
        if(a[3]=='O'&&a[4]=='O'&&output==true)
        {   a[3]='+';
            a[4]='+' ;
            output=false;
 
            }
            arr[i]=a;
 
    }
    if(!output)
        {cout<<"YES"<<endl;
    for(auto x:arr)
    {
        cout<<x<<endl;
    }
        }
    else
        cout<<"NO";
 
 
}