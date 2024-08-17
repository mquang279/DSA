#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int a[], double mid, int n, int k){
    int check = 0;
    for (int i = 0; i < n; i++){
        check += (int)(1.00 * a[i] / mid);
    }
    return check >= k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    double left = 1, right = *max_element(a, a + n);
    double res;
    while (left <= right){
        double mid = (right + left) / 2.00;
        if (check(a, mid, n, k)){
            res = mid;
            left = mid + 0.00000001;
        }
        else right = mid - 0.00000001;
    }  
    cout << fixed << setprecision(6) << res << endl;
    return 0;
}