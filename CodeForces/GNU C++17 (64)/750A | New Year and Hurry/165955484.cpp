#include <iostream>
 
using namespace std;
 
int main()
{
    int n,k,num, counter=0;
    cin>>n>>k;
    num=240-k;
    if(num<0)
        cout<<0;
    else{
    for(int i=1;i<=n;i++)
    {
      if(num-(i*5)>=0)
      {
          counter++;
          num-=(i*5);
      }
      else
        break;
    }
    }
    cout<<counter;
    return 0;
}