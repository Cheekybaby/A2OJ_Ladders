#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int count=0;
    for (int i=1; i<s.length(); i++){
        if (s[i]==s[i-1]){
            count++;
        }
        else {
            continue;
        }
    }

    int distinct = s.length() - count;
    if (distinct%2==0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}