#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   int num,a,b;
    int h=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a>>b;
        if(b-a>=2)
            h++;
    }
    cout<<h;
    return 0;
}