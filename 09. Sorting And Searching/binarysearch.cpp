#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool binarySearch(int a[], int n, int val){
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = (right + left) / 2;
        if (a[mid] == val) return true;
        else if (a[mid] < val){
            right = mid - 1;
        }
        else left = mid + 1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int t;
    cin >> t;
    while (t--){
        int val;
        cin >> val;
        if (binarySearch(a, n, val)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}