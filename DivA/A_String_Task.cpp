#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> st;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i=0; i<s.length(); i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'){
            continue;
        }
        else {
            st.push_back(s[i]);
        }
    }

    for (int i=0; i<st.size(); i++){
        cout << '.' << st[i];
    }
}