#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> b >> a;
    cout << a / b << endl;
    cout << fixed << setprecision(2) << 1.00 * a / b;
    return 0;
}