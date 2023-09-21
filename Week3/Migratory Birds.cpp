#include <bits/stdc++.h>

using namespace std;

int findBirds(int birdID, int birds[]){
    int lowest=0;
    int freq[5]={};
    for(long long i=0;i<birdID;i++)
        freq[birds[i]-1]++;
    for(int i=1;i<5;i++){
        if(freq[i]>freq[lowest])
            lowest=i;
    }
    return lowest+1;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    cout<<findBirds(n,arr);
}
