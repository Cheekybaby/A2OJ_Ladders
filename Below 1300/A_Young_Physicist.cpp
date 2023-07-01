#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[3*n];
    for (int i=0; i<3*n; i++){
        cin >> arr[i];
    }
    
    // for x-coordinates
    int x_sum = 0;
    for (int i=0; i<3*n; i+=3){
        x_sum+=arr[i];
    }

    // for y-coordinates
    int y_sum = 0;
    for (int i=1; i<3*n; i+=3){
        y_sum+=arr[i];
    }

    // for z-coordinates
    int z_sum = 0;
    for (int i=2; i<3*n; i+=3){
        z_sum+=arr[i];
    }

    if (x_sum==0 && y_sum==0 && z_sum==0){
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}