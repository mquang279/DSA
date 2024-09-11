#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int binarySearch(int a[], int n, int val){
    int left = 0, right = n - 1, pos = -1;
    while (left <= right){
        int mid = (left + right) / 2;
        if (a[mid] == val){
            pos = mid;
            right = mid - 1;
        }
        else if (a[mid] < val) left = mid + 1;
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
    cout << binarySearch(a, n, x);
    return 0;
}