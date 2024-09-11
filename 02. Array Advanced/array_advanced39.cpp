/*  [Mảng 1 Chiều Nâng Cao]. Bài 39. Longest zero sum subarray
    Cho mảng A[] gồm N phần tử, bạn hãy tìm ra dãy con (có ít nhất 1 phần tử) dài nhất có tổng bằng 0, nếu có nhiều
    dãy con thỏa mãn hãy in ra dãy con đầu tiên, nếu không tồn tại dãy con có tổng bằng 0 thì in ra NOT FOUND.
    
    Đầu vào
    Dòng 1 là N
    Dòng 2 gồm N phần tử trong mảng A[]
    Giới hạn
    1<=N<=10^6
    0<=abs(A[i])<=10^6
    Đầu ra
    In ra đáp án của bài toán
    
    Ví dụ :
    Input 01
    15
    -4 1 2 -1 2 -3 -8 2 1 -2 -8 7 -5 2 8
    Output 01
    -4 1 2 -1 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    cin >> n;
    int a[n];
    ll sum = 0;
    map<ll, int> mp;
    mp[0] = 0;
    int max_length = -1, pos = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += 1ll * a[i];
        if (mp.find(sum) != mp.end()){
            if (i - mp[sum] + 1 > max_length){
                max_length = i - mp[sum] + 1;
                pos = mp[sum];
            }
        }
        else mp[sum] = i + 1;
    }
    for (int i = pos; i < pos + max_length; i++){
        cout << a[i] << " ";
    }
    if (max_length == -1) cout << "NOT FOUND";
    return 0;
}