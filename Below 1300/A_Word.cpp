#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count_upper = 0, count_lower = 0;
    for (int i=0; i<s.length(); i++){
        if (isupper(s[i])){
            count_upper++;
        }
        else if (islower(s[i])){
            count_lower++;
        }
    }
    if (count_upper>count_lower){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else if (count_upper<=count_lower){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
}