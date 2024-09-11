#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool check(int n){
    int original = n, reversed = 0, sumDigits = 0;
    bool has6 = false;
    while (n != 0){
        int digit = n % 10;
        sumDigits += digit;
        if (digit == 6) has6 = true;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (has6 && reversed == original && sumDigits % 10 == 8) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (check(i)) cout << i << " ";
    }
    return 0;
}