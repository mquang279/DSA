#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int min_val = *min_element(a, a + n);
    int res = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == min_val) res++;
    }
    cout << res;
    return 0;
}