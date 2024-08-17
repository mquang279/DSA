#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fibo[93];

void generateFibo(){
    fibo[1] = 0;
    fibo[2] = 1;
    for (int i = 3; i <= 92; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    generateFibo();
    ll a[n][n];
    int left = 0, right = n - 1, up = 0, down = n - 1, curr = 1;
    while (left <= right && up <= down){
        for (int i = left; i <= right; i++){
            a[up][i] = fibo[curr];
            curr++;
        }
        up++;
        for (int i = up; i <= down; i++){
            a[i][right] = fibo[curr];
            curr++;
        }
        right--;
        for (int i = right; i >= left; i--){
            a[down][i] = fibo[curr];
            curr++;
        }
        down--;
        for (int i = down; i >= up; i--){
            a[i][left] = fibo[curr];
            curr++;
        }
        left++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}