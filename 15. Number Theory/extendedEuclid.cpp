#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int extendedEuclid(int a, int b, int &x, int &y){
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extendedEuclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int x, y;
    extendedEuclid(a, b, x, y);
    cout << x << " " << y;
    return 0;
}