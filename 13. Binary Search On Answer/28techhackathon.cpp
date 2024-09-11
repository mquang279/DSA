#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(ll mid, int a[], int n, int h){
    int tmp = 0;
    for (int i = 0; i < n; i++){
        tmp += ceil(1.00 * a[i] / mid);
    }
    return tmp <= h;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, h;
    cin >> n >> h;
    int a[n];
    for (int &x : a) cin >> x;
    ll left = 0, right = *max_element(a, a + n), res;
    while (left <= right){
        ll mid = (right + left) / 2;
        if (check(mid, a, n, h)){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res;
    return 0;
}