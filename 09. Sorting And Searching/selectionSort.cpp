#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int cnt = 1;
    for (int i = 0; i < n; i++){
        int min_pos = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[min_pos]) min_pos = j;
        }
        swap(a[i], a[min_pos]);
        if (i != n - 1){
            cout << "Buoc " << i + 1 << ": ";
            for (int x : a) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}