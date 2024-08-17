#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    int left = 0, right = 0, maxLength = 0, cnt2 = 0, cnt8 = 0;
    while (right < s.length()){
        if (s[right] == '2') cnt2++;
        else cnt8++;
        while (cnt2 > x || cnt8 > y){
            if (s[left] == '2') cnt2--;
            else cnt8--;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
        right++;
    }
    cout << maxLength;
    return 0;
}