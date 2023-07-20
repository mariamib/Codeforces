#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm> 
#include <iostream> 
#include<vector>
#include<iomanip>
#include <regex>
 
using namespace std;
int main()
{
    int n, l, arr[1000],num,maxx=0;
 
 
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
       
 
 
    }
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] - arr[i + 1] > maxx)
            maxx = arr[i] - arr[i + 1];
 
    }
    double ans = (double)maxx / 2;
    if (arr[0]!=l)
        ans = max(ans,(double)l - arr[0]);
     
    if (arr[n - 1] != 0)
        ans = max(ans,(double) arr[n - 1]);
    
   printf("%.10f\n",ans );
   
   
 
}