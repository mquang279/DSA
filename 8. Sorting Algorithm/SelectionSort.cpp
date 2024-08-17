#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void selectionSort(int a[], int n){
    for (int i = 0; i < n; i++){
        int min_pos = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[min_pos]) min_pos = j;
        }
        swap(a[min_pos], a[i]);
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
    selectionSort(a, n);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}