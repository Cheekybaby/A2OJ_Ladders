#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int problem[3*n];
    for (int i=0; i<3*n; i++){
        cin >> problem[i];
    }
    int answer=0;
    for (int i=0; i<3*n; i+=3){
        int count = 0;
        if (problem[i]==1){
            count++;
        }
        if (problem[i+1]==1){
            count++;
        }
        if (problem[i+2]==1){
            count++;
        }
        if (count>=2){
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}