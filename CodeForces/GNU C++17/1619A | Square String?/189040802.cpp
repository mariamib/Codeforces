#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    string str;
    cin>>num;
    bool square;
    for(int i=0;i<num;i++)
    {
        square=true;
        cin>>str;
        if(str.length()%2==0)
        {
            for(int i=0;i<str.length()/2;i++)
            {
                if(str[i]!=str[(str.length()/2)+i])
                {
                    square=false;
                    break;
                }
            }
        }
        else
            square=false;
         if(square)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
    return 0;
}