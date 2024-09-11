#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool binarySearch(int a[], int n, int val){
    int left = 0, right = n - 1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (a[mid] == val) return true;
        else if (a[mid] < val) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (binarySearch(a, n, a[i] + x)){
            cout << 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}