
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int valleys=0,result=0;
    string path;
    cin>>n>>path;
    for (int i=0;i<path.length();i++){
        if (path[i]=='U')
            result++;
        else
            result--;
/* 10
U D U U U D U D D D
1 0 1 2 3 2 3 2 1 0 => valleys=0
*/
/*10
D  U D  D  D  U  U  D U U
-1 0 -1 -2 -3 -2 -1 0 1 2 => valleys=2
*/
        if (result==-1&&path[i]=='D')
            valleys++;
        }
        cout<<valleys;
}
