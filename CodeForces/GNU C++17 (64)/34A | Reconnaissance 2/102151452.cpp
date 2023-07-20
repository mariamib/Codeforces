#include <stdio.h>
using namespace std;
#include<iostream>
#include<algorithm>
#include<utility>
int main()
{
    int num, arr[101], count = 100000;
    cin >> num;
    pair<int, int>p;
    for (int i = 1; i <= num; i++)cin >> arr[i];
    for (int i = 1; i <num; i++)
    {
        if (max(arr[i], arr[i + 1]) - min(arr[i], arr[i + 1]) < count)
        {
            count = max(arr[i], arr[i + 1]) - min(arr[i], arr[i + 1]);
            p = { i,i + 1 };
 
        }
 
    }
    if (max(arr[num], arr[1]) - min(arr[num], arr[1])<count)
        cout << num << " " << 1;
    else
        cout << p.first << " " << p.second;
    return 0;
}
 