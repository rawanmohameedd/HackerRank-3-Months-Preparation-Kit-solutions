#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin,str);  //to get the input without any spaces
  string arr="abcdefghijklmnopqrstuvwxyz";
   for(int i=0;i<str.length();i++){
    for (int j=0;j<26;j++){
        if (str[i]==arr[j] || str[i]==arr[j]-32) //to check all the charachters capital and small from ascii code
        {
            arr.erase(j,1);
            break;
        }
     }
   }
   if (arr.length()==0)
    cout<<"pangram";
   else
    cout<<"not pangram";
}
