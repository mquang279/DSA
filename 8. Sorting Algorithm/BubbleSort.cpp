#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// O(N^2)
void bubbleSort(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
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
    bubbleSort(a, n);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}