#include <bits/stdc++.h>

using namespace std;

void marsExploration(string s,int c) {

    for(int i=0;i<s.length();i=i+3){
        if (s[i]!='S')
            c++;
    }

    for(int i=1;i<s.length();i=i+3){
       if(s[i]!='O')
            c++;
    }

    for(int i=2;i<s.length();i=i+3){
        if(s[i]!='S')
            c++;
    }
    cout<<c;
}

int main()
{
    string message;
    cin>>message;
    int counter=0;
    marsExploration(message,counter);
}
