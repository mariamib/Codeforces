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
    int n, num1,num2,ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num1 >> num2;
         ans=max(max(num1,num2), min(num1, num2)*2);
 
        cout<< ans * ans<<endl;
 
 
    }
 
 
   
 
}