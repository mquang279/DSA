#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[1000001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i <= k; i++){
        cin >> a[i];
        cnt[a[i]]++;
        if (cnt[a[i]] == 2){
            cout << "YES";
            return 0;
        }
    }
    for (int i = k + 1; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        cnt[a[i - k - 1]]--;
        if (cnt[a[i]] == 2){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}