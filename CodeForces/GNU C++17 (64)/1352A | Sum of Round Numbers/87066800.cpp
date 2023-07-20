#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <algorithm> 
#include <iostream> 
#include<vector>
 
using namespace std;
int main()
{
    int num1,counter=0;
    string num2;
    cin >> num1;
    for(int i =0;i<num1;i++)
    {
        counter = 0;
        cin >> num2;
       counter = count(num2.begin(), num2.end(), '0');
       if (num2.size() - counter == 1)
       {
           cout << 1 << endl;
           cout << num2<<endl;
       }
       else
       {
           cout << num2.size() - counter << endl;
           for (int i = 0; i < num2.size(); i++)
           {
               if (num2[i] != '0')
                   cout << num2[i] << string(num2.size()-1 - i, '0')<<" ";
 
           }
           cout << endl;
       }
    }
}