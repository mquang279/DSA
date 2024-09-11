/*  [Mảng 1 Chiều Nâng Cao]. Bài 19. Dãy con dài nhất
    Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn tìm ra độ dài của dãy con liên tiếp các phần tử sao cho các
    phần tử liền kề nhau trong dãy con đều khác nhau.
    Nếu có nhiều dãy con thỏa mãn, hay in ra dãy con có tổng lớn nhất.
    Đầu vào
    Dòng đầu tiên là số nguyên N.
    Dòng tiếp theo gồm N số nguyên A[i].
    Giới hạn
    1 ≤ N ≤ 10^6
    1 ≤ A[i] ≤ 10^6
    Đầu ra
    In ra đáp án của bài toán trên 2 dòng.
    Dòng đầu tiên là độ dài của dãy con dài nhất.
    Dòng thứ 2 là các phần tử trong dãy con đó.
    Ví dụ :
    Input 01
    8
    1 2 3 4 4 5 6 7
    Output 01
    4
    4 5 6 7
*/

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