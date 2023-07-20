#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <memory.h>
#include <cassert>
 
using namespace std;
 
int main() {
 
    int num, a, b, c, num2 = 0;
    cin >> num >> a >> b >> c;
    for (int i = 0; i <= 4000; i++)
    {
        for (int x = 0; x <= 4000; x++)
        {
            int zc = (num - ((i * a) + (x * b)));
            if (zc < 0)
                break;
            double z = zc / (double)c;
            if (z == (int)z)
                num2 = max(num2, (int)z + i + x);
        }
    }
    cout << num2;
 
 
}