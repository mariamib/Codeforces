#include <iostream>
#include <string>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int ii, jj,n;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> n;
            if (n== 1)
            {
                jj = max(j, 3) - min(j, 3);
                ii = max(i, 3) - min(i, 3);
 
            }
 
        }
    }
    cout << jj + ii;
}