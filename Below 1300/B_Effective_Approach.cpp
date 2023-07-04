#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,a;
    cin >> n;
    int arr[n+1];
    for (int i=1; i<=n; i++){
        cin >> a;
        arr[a] = i;
    }
    int  m, b;
    ll vasya=0, petya=0;
    cin >> m;
    while (m--){
        cin >> b;
        vasya+=arr[b];
        petya+=(n+1)-(arr[b]);
    }

    cout << vasya << " " << petya;

    return 0;
}