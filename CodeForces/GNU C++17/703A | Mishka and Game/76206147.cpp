#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num,input,counter1=0,counter2=0,player1,player2;cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>player1>>player2;
        if(player1>player2)
        counter1++;
        else if(player2>player1)
            counter2++;
 
 
    }
    if(counter1>counter2)
        cout<<"Mishka";
    else if(counter2>counter1)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
}