/*  [Mảng 1 Chiều Nâng Cao]. Bài 37. Dãy con dài nhất
    Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm dãy con liên tiếp dài nhất có tổng chi
    hết cho K.

    Đầu vào
    Dòng thứ nhất gồm N K
    Dòng thứ 2 gồm các phần tử trong mảng A[]
    Giới hạn
    1<=K<=N<=10^6
    -10^6<=A[i]<=10^6
    Đầu ra
    In ra dãy con dài nhất hoặc in ra -1 nếu không tồn tại dãy con chia hết cho K.
    
    Ví dụ :
    Input 01
    12 2
    -4 1 4 -4 4 4 -3 4 2 -4 2 4
    Output 01
    12
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int tmp;
    map<int, int> mp;
    mp[0] = 0;
    ll sum = 0;
    int maxLength = -1;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        sum += tmp;
        sum = ((sum % k) + k) % k;
        if (sum < 0) sum += k;
        if (mp.find(sum) != mp.end()){
            maxLength = max(maxLength, i + 1 - mp[sum]);
        }
        if (sum != 0 && mp[sum] == 0) mp[sum] = i + 1;
    }
    cout << maxLength;
    return 0;
}