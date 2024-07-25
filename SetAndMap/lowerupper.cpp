#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    multiset<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    int t;
    cin >> t;
    while (t--){
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
                auto it = se.lower_bound(x);
                if (it == se.end()) cout << -1 << endl;
                else cout << *it << endl;
                break;
            }
            case 4:
            {
                auto it = se.upper_bound(x);
                if (it == se.begin()) cout << -1 << endl;
                else{
                    it--;
                    cout << *it << endl;
                }
                break;
            }
            default:
                break;
        }
    }
    return 0;
}