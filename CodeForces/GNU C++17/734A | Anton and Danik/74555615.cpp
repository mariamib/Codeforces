#include <iostream>
 
using namespace std;
 
int main()
{
    string input;
    int num;
    cin>>num;
    cin>>input;
    int counter1=0,counter2=0;
    for(int i=0;i<num;i++)
    {
        if(input[i]=='A')
            counter1++;
        else
            counter2++;
    }
    if(counter1>counter2)
        cout<<"Anton";
    else if(counter2>counter1)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}