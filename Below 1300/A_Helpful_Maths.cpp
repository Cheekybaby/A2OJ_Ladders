#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> nums;

    for (int i=0; i<s.length(); i++){
        if (s[i]=='+'){
            continue;
        }
        else {
            nums.push_back(s[i]-'0');
        }
    }
    sort(nums.begin(), nums.end());
    for (int i=0; i<nums.size(); i++){
        if (i<nums.size()-1){
            cout << nums[i] << "+";
        }
        else {
            cout << nums[i];
        }
    }
}