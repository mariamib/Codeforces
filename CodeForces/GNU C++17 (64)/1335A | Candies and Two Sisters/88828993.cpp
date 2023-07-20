#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//#include <algorithm> 
#include <iostream> 
//#include<vector>
using namespace std;
int main()
{
    int input, num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> input;
        if (input == 1 || input == 2)
            cout << 0 << endl;
        else if (input % 2 != 0)
            cout << input / 2 << endl;
        else
            cout << (input / 2) - 1 << endl;
 
 
 
    }
    
   
   
 
 
 
    return 0;
}