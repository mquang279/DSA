#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + n, __greater());
    int i = 0, j = 0;
    while (i < n && j < n){
        int tmp = i + j;
        if (tmp % 2 == 0){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }
    if (i != n) cout << a[n - 1];
    if (j != n) cout << b[n - 1];
    return 0;
}