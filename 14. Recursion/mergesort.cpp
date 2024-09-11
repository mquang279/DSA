#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int a[1001];

void merge(int n, int l, int mid, int r){
    int i = l, j = mid + 1;
    vector<int> v;
    while (i <= mid && j <= r){
        if (a[i] < a[j]){
            v.push_back(a[i]);
            i++;
        } else{
            v.push_back(a[j]);
            j++;
        }
    }
    for (int k = i; k <= mid; k++){
        v.push_back(a[k]);
    }
    for (int k = j; k <= r; k++){
        v.push_back(a[k]);
    }
    for (int i = 0; i < v.size(); i++){
        a[i + l] = v[i];
    }
}

void mergeSort(int n, int l, int r){
    if (l < r){
        int mid = (l + r) / 2;
        mergeSort(n, l, mid);
        mergeSort(n, mid + 1, r);
        merge(n, l, mid, r);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    mergeSort(n, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}