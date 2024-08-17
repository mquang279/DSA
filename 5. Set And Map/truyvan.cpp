#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool binarySearch(int a[], int n, int val){
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = (right + left) / 2;
        if (a[mid] == val) return true;
        else if (a[mid] < val) left = mid + 1;
        else right = mid - 1;
    }
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
    int t, val;
    cin >> t;
    sort(a, a + n);
    for (int i = 0; i < t; i++){
        cin >> val;
        if (binarySearch(a, n, val)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}