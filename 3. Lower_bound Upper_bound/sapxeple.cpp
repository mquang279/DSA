#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cntOdd(int a){
    int cnt = 0;
    while (a != 0){
        int tmp = a % 10;
        if (tmp % 2 != 0) cnt++;
        a /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if (cntOdd(a) == cntOdd(b)) return a < b;
    return cntOdd(a) > cntOdd(b);
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