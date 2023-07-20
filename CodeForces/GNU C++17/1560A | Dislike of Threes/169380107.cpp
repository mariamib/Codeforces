#include <iostream>
using namespace std;
int main()
{
    long int arr[1000] = {};
     long int counter = 1, t, k;
    for (int i = 1; counter <= 1000; i++)
    {
        if (((i % 3) != 0) && ((i % 10)!=3))
        {
            arr[counter] = i;
            counter++;
           
        }
    }
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> k;
        cout << arr[k] << endl;
    }
 
}