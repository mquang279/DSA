#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int firstPos(int a[], int n, int val){
    int left = 0, right = n - 1, pos = -1;
    while (left <= right){
        int mid = (right + left) / 2;
        if (a[mid] == val){
            pos = mid;
            right = mid - 1;
        }
        else if (a[mid] < val){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return pos;
}

int lastPos(int a[], int n, int val){
    int left = 0, right = n - 1, pos = -1;
    while (left <= right){
        int mid = (right + left) / 2;
        if (a[mid] == val){
            pos = mid;
            left = mid + 1;
        }
        else if (a[mid] < val){
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    int firstAppear = firstPos(a, n, x), lastAppear = lastPos(a, n, x);
    cout << firstAppear << endl;
    cout << lastAppear << endl;
    auto it = lower_bound(a, a + n, x);
    if (it - a == n) cout << -1 << endl;
    else cout << it - a << endl;
    it = upper_bound(a, a + n, x);
    if (it - a == n) cout << -1 << endl;
    else cout << it - a << endl;
    if (lastAppear == -1) cout << 0 << endl;
    else cout << lastAppear - firstAppear + 1 << endl;
    return 0;
}