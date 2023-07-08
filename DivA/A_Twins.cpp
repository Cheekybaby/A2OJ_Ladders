#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> coins;
    int sum=0, ans;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        sum+=x;
        coins.push_back(x);
    }

    sort(coins.rbegin(), coins.rend());
    int summation=0;
    for (int i=0; i<coins.size(); i++){
        summation+=coins[i];
        if(summation>(sum/2)){
            ans= i+1;
            break;
        }
        // cout << coins[i];
    }
    cout << ans;
    return 0;
}