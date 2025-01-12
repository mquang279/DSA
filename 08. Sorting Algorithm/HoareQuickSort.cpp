#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int partition(int a[], int lo, int hi) {
    int pivot = a[lo];
    int i = lo;
    int j = hi + 1;
    while (true) {
        while (a[++i] < pivot) {
            if (i == hi) break;
        }
        while (a[--j] > pivot) {
            if (j == lo) break;
        }
        if (i >= j) break;
        swap(a[i], a[j]);
    }
    swap(a[j], a[lo]);
    return j;
}

void quickSort(int a[], int lo, int hi) {
    if (lo < hi) {
        int p = partition(a, lo, hi);
        quickSort(a, lo, p - 1);
        quickSort(a, p + 1, hi);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    quickSort(a, 0, n - 1);
    for (int x : a) cout << x << " ";
    return 0;
}