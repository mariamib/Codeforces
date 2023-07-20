#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int>arr;
    int num;cin>>num;
    int input;
    for(int i=0;i<num;i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}