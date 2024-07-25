#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int tmp;
    multiset<int> se;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        se.insert(tmp);
    }
    int t;
    cin >> t;
    while (t--){
        int type;
        cin >> type;
        switch (type)
        {
            case 1:{
                int x;
                cin >> x;
                se.insert(x);
                break;
            }
            case 2:
            {
                int x;
                cin >> x;
                if (se.find(x) != se.end()) se.erase(x);
                break;
            }
            case 3:
            {
                cout << *se.begin() << endl;
                break;
            }
            case 4:
            {
                cout << *se.rbegin() << endl;
                break;
            }
        }
    }
    return 0;
}