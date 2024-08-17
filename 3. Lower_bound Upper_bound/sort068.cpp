#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(int a, int b){
    int cnta = 0, cntb = 0, a1 = a, b1 = b;
    while (a != 0){
        int tmp = a % 10;
        if (tmp == 0 || tmp == 6 || tmp == 8) cnta++;
        a /= 10;
    }
    while (b != 0){
        int tmp = b % 10;
        if (tmp == 0 || tmp == 6 || tmp == 8) cntb++;
        b /= 10;
    }
    if (cnta == cntb) return a1 < b1;
    return cnta > cntb;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for (int x : a) cout << x << " ";
    return 0;
}