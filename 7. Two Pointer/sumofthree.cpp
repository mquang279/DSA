#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++){
        int left = i + 1, right = n - 1;
        while (left < right){
            if (a[left] + a[right] == k - a[i]){
                cout << "YES";
                return 0;
            }
            else if (a[left] + a[right] > k - a[i]) right--;
            else left++;
        }
    }
    cout << "NO";
    return 0;
}