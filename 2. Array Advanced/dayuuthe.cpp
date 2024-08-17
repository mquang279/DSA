#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int cnt = 0;
    int x, cntOdd = 0, cntEven = 0;
    while (cin >> x){
        cnt++;
        if (x % 2 == 0) cntEven++;
        else cntOdd++;
    }
    if ((cnt % 2 == 0 && cntEven > cntOdd) || (cnt % 2 == 1 && cntOdd > cntEven)) cout << "YES";
    else cout << "NO";
    return 0;
}