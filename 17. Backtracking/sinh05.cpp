#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[25];
int n, k;

void Try(int pos, int start) {
    if (pos == k - 1) {
        for (int i = 0; i < k - 1; i++) cout << a[i];
        cout << endl;
    } else {
        for (int i = start; i <= n; i++) {
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