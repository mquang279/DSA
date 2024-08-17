#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int mid, int x, int y, int n){
    int tmp = (mid / x) + (mid / y);
    return tmp >= n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x, y;
    cin >> n >> x >> y;
    int left = 0, right = max(x, y) * (n - 1), res;
    while (left <= right){
        int mid = (right + left) / 2;
        if (check(mid, x, y, n - 1)){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res + min(x, y);
    return 0;
}