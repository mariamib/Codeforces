#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//#include <algorithm> 
#include <iostream> 
//#include<vector>
using namespace std;
int main()
{
    int input, count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        count += input;
 
 
    }
    if (count % 5 == 0&&count!=0)
        cout << count / 5 << endl;
    else
        cout << -1;
   
 
 
 
    return 0;
}