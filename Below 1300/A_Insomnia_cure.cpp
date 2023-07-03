#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int count=0;
    int arr[d] = {0};
    if (k==1 || l==1 || m==1 || n==1){
        count=d;
    }
    else{
        for (int i=k-1; i<d; i+=k){
            arr[i]=1;
        }
        for (int i=l-1; i<d; i+=l){
            arr[i]=1;
        }
        for (int i=m-1; i<d; i+=m){
            arr[i]=1;
        }
        for (int i=n-1; i<d; i+=n){
            arr[i]=1;
        }
    }
    for (int i=0; i<d; i++){
        if(arr[i]==1){
            count++;
        }
    }
    cout << count;
}