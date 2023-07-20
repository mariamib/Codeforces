#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    set<int>arr;
    int num,aa,a;cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        for(int i=0;i<a;i++)
        {
            cin>>aa;
            arr.insert(aa);
        }
        cout<<arr.size()<<endl;
        arr.clear();
    }
}