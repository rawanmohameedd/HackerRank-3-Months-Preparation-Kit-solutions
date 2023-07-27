#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int result[100]={0};
    int numbers[n];
    for (long long i=0;i<n;i++){

        cin>>numbers[i];
        result[numbers[i]]++;
    }
    for (long long i=0;i<100;i++)
        cout<<result[i]<<"\t";
}
