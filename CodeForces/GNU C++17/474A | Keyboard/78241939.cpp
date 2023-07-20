// CPP program to find position of a character
// in a given string.
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./",input;
    char a;
    cin>>a;
    cin>>input;
    for(int i=0;i<input.size();i++)
    {   size_t found = str.find(input[i]);
        if(a=='R')
            cout<<str[found-1];
        else
            cout<<str[found+1];
    }
 
    return 0;
}