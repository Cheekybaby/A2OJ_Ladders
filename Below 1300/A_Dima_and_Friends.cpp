#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fingers[n+1] = {0};
    int sum=0;
    for (int i=1; i<n+1; i++){
        cin >> fingers[i];
        sum+=fingers[i];
    }
    int count = 0;
    for (int i=sum+1; i<=sum+5; i++){
        if (i%(n+1)==1){
            continue;;
        }
        else {
            count++;
        }
    }

    cout << count;

    return 0;
}