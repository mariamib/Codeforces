#include<bits/stdc++.h>
using namespace std;
 
int main() {
    
    int num, num1, j = 1,arr[30000];
    cin >> num >> num1;
    for (int i = 1; i < num; i++)
        cin >> arr[i];
    while (j < num1)
        j += arr[j ];
    if (j == num1)
        cout << "YES";
    else
        cout << "NO";
}