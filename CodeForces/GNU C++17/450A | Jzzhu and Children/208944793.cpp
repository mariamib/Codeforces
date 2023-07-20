using namespace std;
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>#include <string>
#include<map>
#include<stack>
int main()
{
    int num, n;
    float nn, max = 0;
    cin >> num>> n;
    int index = num;
    for (int i = 1; i <= num; i++)
    {
        cin >> nn;
        if (ceil(nn / n )>= max)
        {
            index = i;
            max = ceil(nn / n);
        }
    }
    cout << index;  
}