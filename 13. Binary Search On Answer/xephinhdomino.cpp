#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, a, b;
    cin >> a >> b >> n;
    int left = 0, right = max(a, b) * n, res;
    while (left <= right){
        int mid = (right + left) / 2;
        if ((mid / a) * (mid / b) >= n){
            res = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << res;
    return 0;
}