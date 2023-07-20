#include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,b,counter1=0,counter2=0;cin>>num;
    vector<int>arr;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<num;i++)
    {
        cin>>b;
        if(arr[i]==0&&b==1)
            counter2++;
        else if(arr[i]==1&&b==0)
            counter1++;
    }
 
if(counter1==0)
    cout<<-1;
    else if(counter1>counter2)
        cout<<1;
    else
    cout<<(counter2/counter1)+1;
}