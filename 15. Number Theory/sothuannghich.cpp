#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPalindrome(int n){
    int original = n, reversed = 0;
    while (n != 0){
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed == original;
}

bool has3PrimeFactor(int n){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) cnt++;
        if (cnt >= 3) return true;
        while (n % i == 0){
            n /= i;
        }
    }
    if (n != 1) cnt++;
    return cnt >= 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<int> v;
    for (int i = a; i <= b; i++){
        if (isPalindrome(i) && has3PrimeFactor(i)) v.push_back(i);
    }
    if (v.size() == 0) cout << -1;
    else{
        for (int x : v){
            cout << x << " ";
        }
    }
    return 0;
}