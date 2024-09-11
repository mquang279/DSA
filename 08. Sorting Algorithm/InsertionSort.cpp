#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void insertionSort(int a[], int n){
    for (int i = 1; i < n; i++){
        int pos = i - 1;
        int x = a[i];
        while (pos >= 0 && a[pos] > x){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
}
// O(n^2)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}