#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    int cnt[1001] = {0};
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++){
        if (cnt[a[i]] != 0){
            cout << a[i] << " " << cnt[a[i]] << endl;
            cnt[a[i]] = 0;
        }
    }
    return 0;
}