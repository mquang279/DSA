#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    multiset<int> se;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i < k) se.insert(a[i]);
    }
    auto it = se.begin();
    if (k % 2 == 0) advance(it, k / 2 - 1);
    else advance(it, k / 2);
    cout << *it << " ";
    for (int i = k; i < n; i++){
        se.insert(a[i]);
        if (*it == a[i - k]){
            auto it2 = it;
            if (a[i] >= *it) it++;
            else it--;
            se.erase(it2);
        }
        else if (*it > a[i - k]){
            if (a[i] >= *it) it++;
            se.erase(se.lower_bound(a[i - k]));
        }
        else{
            if (a[i] < *it) it--;
            se.erase(se.lower_bound(a[i - k]));
        }
        cout << *it << " ";
    } 
    return 0;
}