#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) return false;
    }
    return a >= 2;
}

vector<int> prime_list(vector<int> v){
    vector<int> res;
    for (int x : v){
        if (isPrime(x)) res.push_back(x);
    }
    return res;
}

void nhap(vector<int>& v){
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
}

void in(vector<int> v){
    for (int x : v) cout << x << " ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> v;
    nhap(v); 
    vector<int> res = prime_list(v);
    in(res);
    return 0;
}