#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
int s1[1000001] = { 0 };
long long int num, input,bla;
 
int main()
 
{
 
    s1[1] = 1; s1[2] = 0;
 
    for (int i = 2; i <= 1000; i++) {
 
        if (s1[i])continue;
 
        for (int j = 2 * i; j <= 1000000; j += i) {
 
            s1[j] = 1;
 
        }
 
    }
 
 
    
 
    cin >> num;
 
    for (int i = 0; i < num; i++) {
 
       
 
        cin >> input;
 
         bla = sqrt(input);
 
        if ((bla*bla == input && !s1[bla]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
 
    }
 
    return 0;
}