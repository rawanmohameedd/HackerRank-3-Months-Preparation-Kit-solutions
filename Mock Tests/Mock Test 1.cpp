#include <bits/stdc++.h>

using namespace std;
string ltrim(const string & );
string rtrim(const string & );
vector < string > split(const string & );
/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
void findMedian(int n, int nm[]) {
  for (int i = 0; i < n; i++) {
    int swapp = 0;
    for (int j = i + 1; j < n; j++) {
      if (nm[j] > nm[i]) {
        swapp = nm[i];
        nm[i] = nm[j];
        nm[j] = swapp;
      }
    }
  }
  cout << nm[n / 2];
}
int main() {
  int n;
  cin >> n;
  int nm[n];
  for (int i = 0; i < n; i++) {
    cin >> nm[i];
  }
  findMedian(n, nm);
}
