#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    int k;
    cin >> n >> k;
    int  a[n];
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if((a[i] + a[j]) % k == 0) {
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}
