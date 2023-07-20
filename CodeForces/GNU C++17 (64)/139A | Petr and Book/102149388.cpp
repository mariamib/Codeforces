#include <stdio.h>
using namespace std;
#include<iostream>
 
int main()
{
    int num, count = 0;
    cin >> num;
    int arr[8];
    for (int i = 1; i <=7; i++)cin >> arr[i];
    while (count<num)
    {
        for (int i = 1; i <= 7; i++)
        {
            count += arr[i];
            if (count >= num)
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}
 