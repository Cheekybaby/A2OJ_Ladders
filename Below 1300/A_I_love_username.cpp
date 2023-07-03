#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int point;
    cin >> n >> point;
    int max(point), min(point), amazing(0);
    while (n--){
        cin >> point;
        if (point<min){
            min = point;
            amazing++;
        }
        if (point>max){
            max = point;
            amazing++;
        }
    }
    cout << amazing;
    return 0;
}