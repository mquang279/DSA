#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int a, int b){
    if (a < 0 && b >= 0) return true;
    if (a >= 0 && b < 0) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (check(a[0], a[1])) cout << a[0] << " ";
    for (int i = 1; i < n - 1; i++){
        if (check(a[i], a[i - 1]) || check(a[i], a[i + 1])) cout << a[i] << " ";
    }
    if (check(a[n - 2], a[n - 1])) cout << a[n - 1];
    return 0;
}