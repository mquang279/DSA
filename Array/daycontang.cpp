#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t, n;
    cin >> t;
    for (int k = 1; k <= t; k++){
        cin >> n;
        int a[n];
        int max_length = 1, curr_length = 1;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> l;
        vector<int> r;
        int curr_l = 0;
        l.push_back(0);
        r.push_back(0);
        for (int i = 1; i < n; i++){
            if (a[i] > a[i - 1]) curr_length++;
            else {
                curr_length = 1;
                curr_l = i;
            }
            if (curr_length >= max_length){
                max_length = curr_length;
                l.push_back(curr_l);
                r.push_back(i);
            }
        }
        cout << "Test #" << k << " :" << endl;
        cout << max_length << endl;
        for (int i = 0; i < l.size(); i++){
            if (r[i] - l[i] + 1 == max_length){
                for (int j = l[i]; j <= r[i]; j++){
                    cout << a[j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}