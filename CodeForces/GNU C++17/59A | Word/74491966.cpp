#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int counter1=0,counter2=0;
    string input,x;
    cin>>input;
    x=input;
    for(int i=0;i<input.size();i++)
    {
        if(input[i]>='a'&&input[i]<='z')
        {
             counter1++;
             input[i]=toupper(input[i]);
        }
 
        else
        {
             counter2++;
             x[i]=tolower(x[i]);
        }
    }
    if(counter1>=counter2)
        cout<<x;
    else
        cout<<input;
 
 
    return 0;
}