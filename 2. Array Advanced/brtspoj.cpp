#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int minDist = INT_MAX, cnt = 1;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i - 1] == minDist) cnt++;
        else if (a[i] - a[i - 1] < minDist){
            minDist = a[i] - a[i - 1];
            cnt = 1;
        }
    }
    cout << minDist << " " << cnt;
    return 0;
}