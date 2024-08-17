#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n][n];
    int left = 0, right = n - 1, top = 0, down = n - 1, curr = 1;
    while (left <= right && top <= down){
        for (int i = left; i <= right; i++){
            a[top][i] = curr;
            curr++;
        }
        top++;
        for (int i = top; i <= down; i++){
            a[i][right] = curr;
            curr++;
        }
        right--;
        for (int i = right; i >= left; i--){
            a[down][i] = curr;
            curr++;
        }
        down--;
        for (int i = down; i >= top; i--){
            a[i][left] = curr;
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