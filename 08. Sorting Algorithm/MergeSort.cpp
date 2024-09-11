#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void merge(int a[], int l, int m, int r){
    int i = l, j = m + 1;
    vector<int> v;
    while (i <= m && j <= r){
        if (a[i] <= a[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(a[j]);
            j++;
        }
    }
    for (int k = i; k <= m; k++) v.push_back(a[k]);
    for (int k = j; k <= r; k++) v.push_back(a[k]);
    for (int i = 0; i < v.size(); i++) a[i + l] = v[i];
}

void mergeSort(int a[], int l, int r){
    if (l < r){
        int m = (r + l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
// O(NlogN)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}