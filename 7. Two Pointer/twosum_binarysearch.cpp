#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool binarySeach(int a[], int n, int val, int left, int right){
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        if (binarySeach(a, n, k - a[i], i + 1, n - 1)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}