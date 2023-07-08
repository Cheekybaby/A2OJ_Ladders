#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, h="hello";
    cin >> s;
    int j=0, ans=0;
    for (int i=0; i<s.length(); i++){
        if(s[i]==h[j]){
            j++;
            ans++;
        }
    }
    if(ans==5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}