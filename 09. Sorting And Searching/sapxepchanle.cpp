#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, __greater());
    int i = 0, j = n - 1;
    while (i < n / 2 && j >= n / 2){
        cout << a[j] << " " << a[i] << " ";
        i++;
        j--;
    }
    while (i < n / 2){
        cout << a[i] << " ";
        i++;
    }
    while (j >= n / 2){
        cout << a[j] << " ";
        j--;
    }
    return 0;
}