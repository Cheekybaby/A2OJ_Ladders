#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[2*n];

    for (int i=0; i<2*n; i++){
        cin >> arr[i];
    }

    int total = (arr[0]+arr[1]);
    int maxi = total;
    for (int i=2; i<2*n; i+=2){
        int current = total-arr[i];
        total = current+arr[i+1];
        if (total>maxi){
            maxi = total;
        }
    }
    cout << maxi;
}