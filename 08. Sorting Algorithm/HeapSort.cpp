#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void heapify(int a[], int n, int i) {
    int l = i * 2;
    int r = i * 2 + 1;
    int largest = i;
    if (l <= n && a[l] > a[largest]) {
        largest = l;
    } 
    if (r <= n && a[r] > a[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    // Build max heap
    for (int i = n / 2; i >= 1; i--) {
        heapify(a, n, i);
    }

    // Sort
    for (int i = n; i >= 1; i--) {
        swap(a[i], a[1]);
        heapify(a, i - 1, 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    heapSort(a, n);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}