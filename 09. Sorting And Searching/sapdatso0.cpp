#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(int a, int b){
    if (a == 0) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int cnt = 0;
    for (int x : a){
        if (x != 0){
            cout << x << " ";
            cnt++;
        }
    }
    for (int i = 0; i < n - cnt; i++) cout << 0 << " ";
    return 0;
}