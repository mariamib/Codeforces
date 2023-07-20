#include <iostream>
 
using namespace std;
 
int main()
{   int a,b,c;
    cin>>a>>b;
    int counter=0;
    for(int i=0;i<a;i++)
    {
        cin>>c;
        if(c>b)
            counter+=2;
        else
            counter++;
    }
    cout<<counter;
    return 0;
}