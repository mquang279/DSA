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
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int left = j + 1, right = n - 1;
            while (left < right){
                if (a[left] + a[right] == k - a[i] - a[j]){
                    cout << "YES";
                    return 0;
                }
                else if (a[left] + a[right] < k - a[i] - a[j]) left++;
                else right--;
            }
        }
    }
    cout << "NO";
    return 0;
}