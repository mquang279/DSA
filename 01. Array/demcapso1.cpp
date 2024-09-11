#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k, cnt = 0; 
    cin >> k;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] + a[j] == k) cnt++;
        }
    }
    cout << cnt;
    return 0;
}