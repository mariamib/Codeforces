#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm> 
#include <iostream> 
//#include<vector>
using namespace std;
int main()
{
    int num, maxx=0,arr[5];
    
    for (int i = 0; i < 4; i++)
    {
        cin >> num;
        if (maxx <= num)
            maxx = num;
        arr[i] = num;
       
    }
    sort(arr, arr + 4);
    cout << maxx - arr[0] << " " << maxx - arr[1] << " " << maxx - arr[2];
 
    
   
   
 
 
 
    return 0;
}