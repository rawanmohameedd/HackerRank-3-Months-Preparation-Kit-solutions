#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long x,decimal=0;
        int binary,j=0;
        string y="",temp;
        cin>>x;
        y.insert(0,32,'0');
        while(x!=0){
            if(x%2==0)
                y[j]='0';
            else
                y[j]='1';
            x=x/2;
            j++;
        }
        for(int i=0;i<y.length();i++){
            if(y[i]=='0')
                y[i]='1';
            else if (y[i]=='1')
                y[i]='0';
        }

        for(int i=0;i<y.length();i++){
            temp=y[i];
            binary=stoi(temp);
            decimal=decimal+(pow(2,i)*binary);
        }


    cout<<decimal<<endl;
    }
}
