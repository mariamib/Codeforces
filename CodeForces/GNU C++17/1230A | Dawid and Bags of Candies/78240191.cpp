#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int a,b,c,d;
    vector<int>arr;
    cin>>a>>b>>c>>d;
    arr.push_back(a);   arr.push_back(b);   arr.push_back(c);   arr.push_back(d);
       sort(arr.begin(),arr.end());
       if(arr[0]+arr[3]==arr[1]+arr[2]||(a+b+c+d)-*max_element(arr.begin(),arr.end())==*max_element(arr.begin(),arr.end()))
        cout<<"YES";
       else
        cout<<"NO";
 
}