#include <bits/stdc++.h>

using namespace std;
void matchingStrings(int n, string str[],int q,string queries[]){
    int result[q]={0};
    for(int i=0;i<q;i++){
        for (int j=0;j<n;j++){
            if (queries[i]==str[j])
                result[i]++;
        }
        cout<<result[i]<<endl;
    }

}
int main(){
    int n,q;
    cin>>n;
    string str[n];
    for (int i=0;i<n;i++)
        cin>>str[i];
    cin>>q;
    string queries[q];
    for (int i=0;i<q;i++)
        cin>>queries[i];
    matchingStrings(n,str,q,queries);
}
