#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    else {
        for (int i=2; i<=sqrt(n); i++){
            if (n%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n, m;
    cin >> n >> m;
    int next_prime;
    for (int i=n+1; i<2*n; i++){
        if (isPrime(i)){
            next_prime = i;
            break;
        }
    }
    if (m==next_prime){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}