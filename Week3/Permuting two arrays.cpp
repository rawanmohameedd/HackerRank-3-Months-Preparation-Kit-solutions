#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    int n, k, counter = 0;
    cin >> n >> k;
    vector < int > A(n), B(n);
    for (int i = 0; i < n; i++)
      cin >> A[i];
    for (int i = 0; i < n; i++)
      cin >> B[i];
    //sort array A in ascending order and array B in descending one
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    for (int i = 0; i < n; i++) {

      if (A[i] + B[i] >= k)
        counter++;
    }
    if (counter == n)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;

  }
}
