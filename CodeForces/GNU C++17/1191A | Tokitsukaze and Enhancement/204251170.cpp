#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) int(x.size())
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
 
 
 
 
int main ()
{
    int n;
    cin >> n ;
    int x = n%4;
    if(x == 0)
        cout << "1 A\n";
    else if(x == 1)
        cout << "0 A\n";
    else if(x == 2)
        cout << "1 B\n";
    else
        cout << "2 A\n";
    return 0;
}