#include <iostream>
 
using namespace std;
 
int main()
{
    int num,a,b;cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a>>b;
        if(a>b&&(a-b)%2==0||b>a&&(b-a)%2!=0)
            cout<<1<<endl;
        else if(a==b)
            cout<<0<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}