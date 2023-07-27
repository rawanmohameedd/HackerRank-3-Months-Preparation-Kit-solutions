#include <bits/stdc++.h>

using namespace std;

void lonelyinteger(int x,int arr[]) {
    int lonly;
    for(int i=0;i<x;i++){
        lonly ^=arr[i];
    }
    cout<<lonly;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    lonelyinteger(n,a);
}
