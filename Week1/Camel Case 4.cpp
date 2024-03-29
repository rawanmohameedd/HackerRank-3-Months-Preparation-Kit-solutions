#include <bits/stdc++.h>
using namespace std;

vector<string> splitString(string str)
{
    vector<string> words;
    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    words.push_back(word);
    return words;
}
int main() {
    string x, output;
    while(getline(cin, x)) {
        x.erase(remove(x.begin(), x.end(), '\r'), x.end());
        output = "";
        char operation, type;
        operation = x[0];
        type = x[2];
        string word = x.substr(4);
        if(operation == 'S'){
            word[0] = tolower(word[0]);
            for(auto x : word) {
                if(isupper(x)){
                    output += " ";
                    output += tolower(x);
                }else if(x == '(' || x == ')'){
                    continue;
                }else {
                    output += x;
                }
            }

            cout << output << endl;

        }else {
            vector<string> words = splitString(word);
            output = words[0];
            for(int i=1;i<words.size();i++){
                string wordie = words[i];
                wordie[0] = toupper(wordie[0]);
                output += wordie;
            }
            if(type == 'C'){
                output[0] -= 32;
            }
            if(type == 'M'){
                output += "()";
            }
            cout << output << endl;
        }
    }

    return 0;
}
