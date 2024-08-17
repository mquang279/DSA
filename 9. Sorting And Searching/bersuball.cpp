#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m){
        if (abs(a[i] - b[j]) <= 1){
            cnt++;
            i++;
            j++;
        }
        else if (a[i] < b[j]) i++;
        else j++;
    }
    cout << cnt;
    return 0;
}