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
    int n, x, y, count = 0;
    cin >> n;
    pair<int, int> arr[200];
    for (int i = 0; i < n; i++)
    {
        cin >> x>> y;
        arr[i].first = x;
        arr[i].second = y;
    }
    for (int i = 0; i < n; i++)
    {
        x = arr[i].first, y = arr[i].second;
        bool checkRight = false, checkLeft = false, checkUp = false, checkDown = false;
        for (int ii = 0; ii < n; ii++)
        {
            int xx = arr[ii].first, yy = arr[ii].second;
            if (xx > x && yy == y)
                checkRight = true;
            else if (xx < x && yy == y)
                checkLeft = true;
            else if (xx == x && yy < y)
                checkDown = true;
            else if (xx == x && yy > y)
                checkUp = true;
        }
        if (checkDown && checkUp && checkRight && checkLeft)
            count++;
    }
    cout << count;
}