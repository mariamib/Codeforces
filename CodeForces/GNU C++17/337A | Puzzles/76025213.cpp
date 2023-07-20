#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int num, input ; cin >> num>> input;
    long long b=1000;
    vector<int> arr(input);
    for (auto &it : arr) cin >> it;
 
    sort(arr.begin(),arr.end());
 
    for (int i = 0 ; i <= input - num ; ++i)
    {
        if(abs(arr[i+num-1] - arr[i])<b)
          b= abs(arr[i+num-1] - arr[i]);
    }
    cout <<b ;
}