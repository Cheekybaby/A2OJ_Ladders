#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll s1, s2, s3, s4;
    int arr[4];

    for (int i=0; i<4; i++){
        cin >> arr[i];
    }
    int count=0;
    sort(arr, arr+4);
    for (int i=1; i<4; i++){
        if (arr[i]==arr[i-1]){
            count++;
        }else {continue;};
    }
    cout << count;
    
    return 0;
}