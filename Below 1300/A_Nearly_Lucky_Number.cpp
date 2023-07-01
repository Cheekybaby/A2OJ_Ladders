#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;

    int four = 0, seven = 0, count = 0;
    while (n>0){
        int num = n%10;
        if (num==4){
            four++;
        }
        else if (num==7){
            seven++;
        }
        count++;
        n/=10;
    }
    if ((seven+four)==4 || (seven+four)==7){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}