#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(int a, int b){
    return abs(a) < abs(b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    stable_sort(a, a + n, cmp);
    for (int x : a) cout << x << " ";
    return 0;
}