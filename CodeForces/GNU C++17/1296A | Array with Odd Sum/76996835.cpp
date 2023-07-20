#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,counter=0,input,n;cin>>num;
    bool output1=false;  bool output2=false;
    for(int i=0;i<num;i++)
    {
        cin>>n;
        counter=0;
        output1=false; output2=false;
        for(int i=0;i<n;i++)
        {
            cin>>input;
            counter+=input;
            if(input%2==0)
                output1=true;
            else
                output2=true;
        }
        if(counter%2!=0)
            cout<<"YES"<<endl;
        else if(output1&&output2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
 
}