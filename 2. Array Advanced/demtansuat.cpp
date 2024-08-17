#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[10000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
        cnt[x]++;
    }
    for (int i = 0; i <= 1e7; i++){
        if (cnt[i] != 0){
            cout << i << " " << cnt[i] << endl;
        }
    }
    cout << endl;
    for (int x : a){
        if (cnt[x] != 0){
            cout << x << " " << cnt[x] << endl;
            cnt[x] = 0;
        }
    }
    return 0;
}