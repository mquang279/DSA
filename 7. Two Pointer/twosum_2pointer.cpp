#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    int left = 0, right = n - 1;
    while (left < right){
        ll sum = a[left] + a[right];
        if (sum == k){
            cout << "YES";
            return 0;
        }
        else if (sum < k) left++;
        else right--;
    }
    cout << "NO";
    return 0;
}