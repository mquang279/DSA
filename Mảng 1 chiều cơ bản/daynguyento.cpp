#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool prime[1000001];

void sang(){
    for (int i = 0; i <= 1e6; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(1e6); i++){
        if (prime[i]){
            for (int j = i * i; j <= 1e6; j += i){
                prime[j] = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    sang();
    int a[n], prefix[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i - 1] + a[i];
    }
    int current_l = -1, current_r = -1, max_length = 0;
    int l = -1, r = -1;
    for (int i = 0; i < n; i++){
        if (prime[a[i]]) current_r = i;
        else current_l = i;
        if ((current_r - current_l > max_length) || (current_r - current_l == max_length && (prefix[current_r] - prefix[current_l] > prefix[r] - prefix[l]))){
            max_length = current_r - current_l;
            l = current_l;
            r = current_r;
        }
    }
    if (r == -1) cout << "NOT FOUND";
    else{
        cout << r - l << endl;
        for (int i = l + 1; i <= r; i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}