#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm> 
#include <iostream> 
//#include<vector>
using namespace std;
int main()
{
    int num, n, k, input, arr1[30], arr2[30];
    cin >> num;
    for (int i = 0; i < num; i++)
    {  
        int counter1 = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr1[i] = input;
            counter1 += input;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr2[i] = input;
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n,greater<>());
        
        for (int i = 0; i < k; i++)
            {
            if (arr2[i] > arr1[i])
                counter1 += (arr2[i] - arr1[i]);
            else
                break;
            }
        cout << counter1 << endl;
 
        
 
 
 
 
    }
 
    return 0;
}