#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp1(int a, int b){
    int cnta = 0, cntb = 0;
    int a1 = a, b1 = b;
    while (a != 0){
        int tmp = a % 10;
        if (tmp % 2 == 0) cnta++;
        a /= 10;
    }
    while (b != 0){
        int tmp = b % 10;
        if (tmp % 2 == 0) cntb++;
        b /= 10;
    }
    if (cnta == cntb) return a1 < b1;
    else return cnta < cntb;
}

bool cmp2(int a, int b){
    int cnta = 0, cntb = 0;
    while (a != 0){
        int tmp = a % 10;
        if (tmp % 2 != 0) cnta++;
        a /= 10;
    }
    while (b != 0){
        int tmp = b % 10;
        if (tmp % 2 != 0) cntb++;
        b /= 10;
    }
    return cnta < cntb;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    vector<int> v(a, a + n);
    sort(a, a + n, cmp1);
    for (int x : a) cout << x << " ";
    cout << endl;
    stable_sort(v.begin(), v.end(), cmp2);
    for (int x : v) cout << x << " ";
    return 0;
}