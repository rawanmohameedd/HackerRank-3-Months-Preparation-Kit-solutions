#include <bits/stdc++.h>

using namespace std;

void birthdays(int n,int s[] ,int d,int m){
    int counter=0,sum=0,tmp=0;
    for(int i=0;i<n;i++){
        //tmp as counter for while loop
        while(tmp <m){
            sum+=s[i+tmp];
            tmp++;
        }
        if(sum==d)
            counter++;
        tmp=0;
        sum=0; //make tmp and sum zero again for the next itteration
    }
    cout<<counter;
}
int main(){
    int n;
    cin>>n;
    int s[n];
    int m,d;
    for (int i=0;i<n;i++)
        cin>>s[i];
    cin>>d>>m;
    birthdays(n,s,d,m);

}
