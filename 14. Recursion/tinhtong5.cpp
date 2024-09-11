#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

double f(int n){
    if (n == 1) return 1;
    return 1.00 / n + f(n - 1); 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << f(n);
    return 0;
}