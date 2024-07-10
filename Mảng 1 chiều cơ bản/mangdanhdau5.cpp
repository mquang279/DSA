#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int cnt[1000001] = {0};
    int a[n], max_val = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        max_val = max(max_val, cnt[a[i]]);
    }
    for (int i = 0; i < n; i++){
        if (cnt[a[i]] == max_val){
            cout << a[i] << " " << max_val;
        }
    }
    return 0;
}