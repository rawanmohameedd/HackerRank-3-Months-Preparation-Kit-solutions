#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    int diff1=0,j=n-1;
    int diff2=0,i=0;
  while(i<n)
  {
    diff1+=matrix[i][i];
    diff2+=matrix[i][j];
    i++;
    j--;
  }
    cout<<abs(diff1-diff2);

}
