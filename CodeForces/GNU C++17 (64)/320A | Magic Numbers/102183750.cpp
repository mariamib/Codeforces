#include<iostream>
#include<string>
using namespace std;
long long arr[100001];
int main()
{
 ios::sync_with_stdio(0);
 cin.tie(0);
 string num;
 cin >> num;
 for (int i = 0; i < num.size(); i++)
 {
  if ((num[i] == '1' && num[i + 1] == '4' && num[i + 2] == '4' ))
  {
   if (i + 2 >= num.size() - 1)
   {
    cout << "YES";
    break;
   }
   else
    i += 2;
 //cout << "one" << i << endl;
  }
  else if (num[i] == '1' && num[i + 1] == '4')
  {
   if (i + 1 >= num.size() - 1)
   {
    cout << "YES";
    break;
   }
   else
    i++;
 //cout << "two" << i << endl;
  }
  else if (num[i] == '1')
  {
   if (i == num.size()-1)
    cout << "YES";
  //out << "three" << i << endl;
  }
  else
  {
   cout << "NO";
 //cout << "four" << i << endl;
   break;
  }
  
   
 
 }
 
 
 
 
 
}