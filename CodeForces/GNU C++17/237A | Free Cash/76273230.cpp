#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<int,int>,int>arr;
    map<pair<int,int>,int>::iterator it;
    int num,hour,minute,counter=0;cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>hour>>minute;
        it=arr.find(make_pair(hour,minute));
        if(it==arr.end())
            arr[make_pair(hour,minute)]=1;
        else
             arr[make_pair(hour,minute)]++;
 
             if(arr[make_pair(hour,minute)]>counter)
                counter=arr[make_pair(hour,minute)];
 
    }
    cout<<counter;
    return 0;
}