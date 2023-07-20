#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1;
    vector<int>arr2;
    vector<int>arr3;
    int arrcounter[3];
    int counter1=0, counter2=0, counter3=0;
    int num,a;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(a==1)
        {
            counter1++;
            arr1.push_back(i+1);
 
        }
        else if(a==2)
        {
            counter2++;
            arr2.push_back(i+1);
        }
        else if(a==3)
        {
            counter3++;
            arr3.push_back(i+1);
        }
    }
    if(counter1>=1&&counter2>=1&&counter3>=1)
    {
        arrcounter[0]=counter1;
        arrcounter[1]=counter2;
        arrcounter[2]=counter3;
        int *b=min_element(arrcounter,arrcounter+3);
        cout<<*b<<endl;
        for( int i=0;i<*b;i++)
        {
            cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
 
 
        }
    }
    else
        cout<<0;
    }