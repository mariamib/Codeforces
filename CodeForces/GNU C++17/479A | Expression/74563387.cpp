#include <iostream>
 
using namespace std;
 
int main()
{   int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
   if(a+b*c>=a*(b+c)&&a+b*c>=a*b*c&&a+b*c>=(a+b)*c&&a+b*c>=a+b+c)
    cout<<a+b*c;
    else if(a*(b+c)>=a+b*c&&a*(b+c)>=a*b*c&&a*(b+c)>=(a+b)*c&&a*(b+c)>=a+b+c)
    cout<<a*(b+c);
 
    else if(a*b*c>=a+b*c&&a*b*c>= a*(b+c)&&a*b*c>=(a+b)*c&&a*b*c>=a+b+c)
    cout<<a*b*c;
   else if((a+b)*c>=a*b*c&&(a+b)*c>=a*(b+c)&&(a+b)*c>=a+b*c&&(a+b)*c>=a+b+c)
    cout<<(a+b)*c;
    else
        cout<<a+b+c;
    return 0;
}