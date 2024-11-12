#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
int a[1000];

void Try(int pos, int start) {
    if (pos == k) {
        for (int i = 0; i < k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    } else {
        for (int i = start; i <= n + pos - k + 1; i++) {
            a[pos] = i;
            Try(pos + 1, i + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    Try(0, 1);
    return 0;
}