#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   string output;
    cin>>output;
    string h;
    h=output;
 
       for(int i=0;i<output.length();i++)
       {
           if(h[i]>='a'&&h[i]<='z')
                h[i]-=32;
           else if(h[i]>='A'&&h[i]<='Z')
                h[i]+=32;
 
 
            if(i>0&&output[i]!=toupper(output[i]))
            {
                cout<<output;
                break;
            }
            else if(i==output.length()-1)
                cout<<h;
 
       }
}