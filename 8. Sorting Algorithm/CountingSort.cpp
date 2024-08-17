#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int cnt[1000001];

void countingSort(int a[], int n){
    // 0 <= a[i] <= 1e6
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++){
        cnt[a[i]]++;
        max_val = max(max_val, a[i]);
    }
    for (int i = 0; i <= max_val; i++){
        if (cnt[i] != 0){
            for (int j = 0; j < cnt[i]; j++) cout << i << " ";
        }
    }
}
// O(N^2)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    countingSort(a, n);
    return 0;
}