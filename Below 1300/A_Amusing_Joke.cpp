#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int ans = 1;

    string add;
    add = s1+s2;
    sort(add.begin(), add.end());
    sort(s3.begin(), s3.end());

    if (add.length()==s3.length()){
        for (int i = 0; i < s3.length(); i++)
        {
            if (add[i] == s3[i])
            {
                continue;
            }
            else
            {
                ans = 0;
                break;
            }
        }
        
    }
    else {
        ans = 0;
    }

    if (ans == 1)
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}