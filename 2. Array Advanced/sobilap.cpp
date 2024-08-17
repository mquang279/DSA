#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int x : a){
        cnt[x]++;
        if (cnt[x] == 2){
            cout << x;
            return 0;
        }
    }
    cout << -1;
    return 0;
}