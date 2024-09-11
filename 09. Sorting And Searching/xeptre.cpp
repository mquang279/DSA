#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int &i : a) cin >> i;
    sort(a, a + n);
    int i = 0, j = n - 1, cnt = 0;
    while (i <= j){
        int totalWeight = a[i] + a[j];
        cnt++;
        if (totalWeight > x){
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    cout << cnt;
    return 0;
}