#include <bits/stdc++.h>

using namespace std;


void plusMinus(int x, int arr[])
{
    float pos,neg,zero;
    pos=neg=zero=0;
    for (int i=0; i<x;i++)
    {
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }
    cout<<pos/x<<endl<<neg/x<<endl<<zero/x;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    plusMinus(n,arr);
}
