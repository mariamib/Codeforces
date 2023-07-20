#include <iostream>
 
using namespace std;
 
int main()
{   int num,b;
    cin>>num;
    int counter=0,a=0;
    bool output =true;
    for(int i=0;i<num;i++)
    {   cin>>b;
        if(b==10&&a==01||b==01&&a==10)
           {
            if(output)
            {
                counter+=2;
                output=false;
            }
            else
                counter++;
 
           }
           a=b;
    }
    if(counter==0)
        cout<<1;
    else
    cout<<counter;
    return 0;
}