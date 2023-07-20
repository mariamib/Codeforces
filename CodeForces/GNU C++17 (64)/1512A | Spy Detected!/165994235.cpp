#include <iostream>
using namespace std;
 
int main()
{
    int n,m,num,num1,num2,counter;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        counter=0;
        for(int ii=0;ii<m;ii++)
        {
            cin>>num;
            if(ii==0)
                num1=num;
            else if(ii!=0&&num!=num1)
            {
                counter++;
                num2=ii;
            }
        }
        if(counter>1)
            cout<<1<<endl;
        else
            cout<<num2+1<<endl;
    }
    return 0;
}