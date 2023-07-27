#include <bits/stdc++.h>
#include<string>
using namespace std;

void timeConversion(string s) {

    if(s[s.length()-2]=='A')
    {
        //str1.replace(position,length,str2);
        if (s[0]=='1'&&s[1]=='2')
        s=s.replace(0,2,"00");
        cout<<s.substr(0,8);
    }
    else if (s[s.length()-2]=='P')
    {
        if (s[0]=='1'&&s[1]=='2')
        {
            cout<<s.substr(0,8);
        }
        else{
            string x=s.substr(0,2);
        int num;
        num=stoi(x)+12;
        s=to_string(num)+s.substr(2,6);
        cout<<s;
        }

    }

}

int main()
{
 string clk;
 cin>>clk;
 timeConversion(clk);
}
