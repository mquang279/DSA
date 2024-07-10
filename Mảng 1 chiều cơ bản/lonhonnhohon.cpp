#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x, cnt1 = 0, cnt2 = 0;
    cin >> x;
    for (int i = 0; i < n; i++){
        if (a[i] > x) cnt1++;
        if (a[i] < x) cnt2++;
    }
    cout << cnt2 << endl;
    cout << cnt1;
    return 0;
}