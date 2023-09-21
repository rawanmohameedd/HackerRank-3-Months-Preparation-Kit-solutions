#include <bits/stdc++.h>

using namespace std;

int socks( vector<int>& ar){
    int pairs = 0;
    for (int i = 0; i < ar.size(); i++){
        for (int j = i + 1; j < ar.size(); j++){
            if (ar[i] == ar[j]){
                pairs++;
                ar.erase(ar.begin() + j);
                break;  // Exit the inner loop after erasing the element
            }
        }
    }
    return pairs;
}

int main(){
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << socks(ar);
}
