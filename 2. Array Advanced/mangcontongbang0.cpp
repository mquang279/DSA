/*
Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là kiểm tra xem có tồn tại mảng con có tổng bằng 0 hay không, 
nếu tồn tại mảng con như vậy bạn in ra 1. Nếu không tồn tại dãy con có tổng bằng 0 thì in ra -1.

Giới hạn
1<=K<=N<=10^6
-10^6<=A[i]<=10^6
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    ll sum = 0;
    set<ll> se;
    se.insert(0);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == 0){
            cout << "1";
            return 0;
        }
        sum += 1ll * a[i];
        if (se.find(sum) != se.end()){
            cout << "1";
            return 0;
        }
        se.insert(sum);
    }
    cout << "-1";
    return 0;
}