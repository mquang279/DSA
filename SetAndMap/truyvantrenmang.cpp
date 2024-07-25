#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    unordered_multiset<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    int q;
    cin >> q;
    while (q--){
        int type, x;
        cin >> type >> x;
        switch (type)
        {
            case 1:
            {
                se.insert(x);
                break;
            }
            case 2:
            {
                auto it = se.find(x);
                if (it != se.end()) se.erase(it);
                break;
            }
            case 3:
            {
                if (se.find(x) == se.end()) cout << "NO" << endl;
                else cout << "YES" << endl;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}