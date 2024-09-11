/*  [Mảng 1 Chiều Nâng Cao]. Bài 34. Max distance
    Cho mảng A[] gồm N phần tử và số nguyên dương K, nhiệm vụ của bạn là tìm khoảng cách lớn nhất giữa 2 chỉ số i, j
    sao cho trị tuyệt đối của hiệu A[i] - A[j] bằng K.
    
    Đầu vào
    Dòng đầu tiên là số lượng phần tử trong mảng.
    Dòng thứ 2 là N phần tử trong mảng.
    Giới hạn
    1<=K<=N<=10^6
    -10^6<=A[i]<=10^6
    Đầu ra
    In ra khoảng cách lớn nhất giữa i và j hoặc in ra -1 nếu không tồn tại cặp số như vậy.
    
    Ví dụ :
    Input 01
    14 2
    0 1 3 0 4 0 0 3 3 -4 1 0 -4 3
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
    int a[n];
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (mp[a[i]].first == 0) mp[a[i]].first = i;
        mp[a[i]].second = i;
    }
    mp[a[0]].first = 0;
    int maxDist = -1;
    for (auto it : mp){
        if (mp.find(it.first - k) != mp.end()){
            maxDist = max(maxDist, abs(it.second.first - mp[it.first - k].first));
            maxDist = max(maxDist, abs(it.second.first - mp[it.first - k].second));
            maxDist = max(maxDist, abs(it.second.second - mp[it.first - k].first));
            maxDist = max(maxDist, abs(it.second.second - mp[it.first - k].second));
        }
        if (mp.find(it.first + k) != mp.end()){
            maxDist = max(maxDist, abs(it.second.first - mp[it.first + k].first));
            maxDist = max(maxDist, abs(it.second.first - mp[it.first + k].second));
            maxDist = max(maxDist, abs(it.second.second - mp[it.first + k].first));
            maxDist = max(maxDist, abs(it.second.second - mp[it.first + k].second));
        }
    }
    cout << maxDist;
    return 0;
}