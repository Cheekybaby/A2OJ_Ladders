#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[2*n];
    for (int i=0; i<2*n; i++){
        cin >> arr[i];
    }


    int left, right;
    int zero = 0, one = 0;
    for (int i=0; i<2*n; i+=2){
        if (arr[i]==0){
            zero++;
        }
        else {
            one++;
        }
    }
    if (zero>one){
        left=one;
    }
    else {
        left=zero;
    }
    zero=0, one=0;
    for (int i=1; i<2*n; i+=2){
        if (arr[i]==0){
            zero++;
        }
        else {
            one++;
        }
    }
    if (zero>one){
        right=one;
    }
    else {
        right=zero;
    }
    cout << left+right;

    return 0;
}