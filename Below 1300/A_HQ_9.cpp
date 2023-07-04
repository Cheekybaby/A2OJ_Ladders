#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string output;
    for (int i=0; i<s.length(); i++){
        if (s[i]=='H'){
            output="YES";
            break;
        }
        else if (s[i]=='Q'){
            output = "YES";
            break;
        }
        else if (s[i]=='9'){
            output = "YES";
            break;
        }
        else {
            output = "NO";
        }
    }
    cout << output;
}