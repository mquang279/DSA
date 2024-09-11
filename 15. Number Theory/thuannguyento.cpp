#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool nt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return false;
    }
    return n >= 2;
}

bool csnt(int n){
    int sum = 0;
    while (n != 0){
        int tmp = n % 10;
        if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7) return false;
        sum += tmp;
        n /= 10;
    }
    return nt(sum);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            ++dem;
        }
    }
    cout << dem << endl;
}
