#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    int customers[n], apartments[m];
    for (int &x : customers) cin >> x;
    for (int &x : apartments) cin >> x;
    sort(customers, customers + n);
    sort(apartments, apartments + m);
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m){
        int min_size = customers[i] - k;
        int max_size = customers[i] + k;
        if (min_size <= apartments[j] && apartments[j] <= max_size){
            cnt++;
            i++;
            j++;
        }
        else if (apartments[j] < min_size) j++;
        else i++;
    }
    cout << cnt;
    return 0;
}