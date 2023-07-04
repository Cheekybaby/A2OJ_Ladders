#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int status;

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    
    if (s1.length()==s2.length()){
        for (int i=0; i<s1.length(); i++){
        if (s1[i]==s2[i]){
            status = 0;
        }
        else if (s1[i]<s2[i]){
            status = -1;
            break;
        }
        else {
            status = 1;
            break;
        }
    }
    }
    else if (s1.length()>s2.length()){
        status = 1;
    }
    else {
        status = -1;
    }
    cout << status;

    return 0;
}