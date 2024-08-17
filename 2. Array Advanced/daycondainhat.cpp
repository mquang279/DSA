#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    map<int, int> mp;
    ll currSum = 0, sum = 0;
    int left = 0, right = 0, maxLength = 0, pos = 0;
    while (right < n){
        mp[a[right]]++;
        currSum += 1ll * a[right];
        while (mp[a[right]] >= 2){
            mp[a[left]]--;
            left++;
        }
        if ((right - left + 1 > maxLength) || (right - left + 1 == maxLength && currSum > sum)){
            sum = currSum;
            maxLength = right - left + 1;
            pos = left;
        }
        right++;
    }
    cout << maxLength << endl;
    for (int i = pos; i < pos + maxLength; i++) cout << a[i] << " ";
    return 0;
}