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
 
    long double num,counter=0;
    cin >> num;
    while (num > 0)
    { 
        if ((int)num % 2 != 0)
        {
            counter++;
            num--;
        }
        num = num / 2.0;
    }
    cout << counter;
 
}