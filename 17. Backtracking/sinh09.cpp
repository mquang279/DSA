#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k, cnt;
int a[20], b[20];

void Try(int i){
    if (i == k){
        cnt++;
        for (int j = 0; j < k; j++){
            if (a[j] != b[j]) return;
        }
        cout << cnt;
        return;
    }
    for (int j = n + i - k + 1; j >= b[i - 1] + 1; j--){
        b[i] = j;
        Try(i + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> a[i];
    }
    Try(0);
    return 0;
}