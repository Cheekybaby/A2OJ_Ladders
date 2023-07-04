#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k*l;
    int total_limes = c*d;

    int toast_drink = total_drink/nl;
    int toast_salt = p/np;


    cout << min(toast_drink, min(total_limes, toast_salt))/n;

    return 0;
}