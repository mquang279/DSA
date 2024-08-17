#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int x;

bool cmp1(int a, int b){
    if (abs(a - x) == abs(b - x)) return a < b;
    return abs(a - x) < abs(b - x);
}

bool cmp2(int a, int b){
    if (a % 2 == 0 && b % 2 != 0) return true;
    if (a % 2 != 0 && b % 2 == 0) return false;
    if (a % 2 == 0 && b % 2 == 0) return a < b;
    if (a % 2 != 0 && b % 2 != 0) return b < a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, cmp1);
    for (int x : a) cout << x << " ";
    sort(a, a + n, cmp2);
    cout << endl;
    for (int x : a) cout << x << " ";
    return 0;
}