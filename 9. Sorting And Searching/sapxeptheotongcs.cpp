#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(int a, int b){
    int sumA = 0, sumB = 0;
    int a1 = a, b1 = b;
    while (a != 0){
        sumA += a % 10;
        a /= 10;
    }
    while (b != 0){
        sumB += b % 10;
        b /= 10;
    }
    if (sumA == sumB) return a1 < b1;
    return sumA < sumB;
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