/*  [Mảng 1 Chiều Nâng Cao]. Bài 14. Liệt kê và đếm
    Cho một dãy các số nguyên dương không quá 9 chữ số, mỗi số cách nhau vài khoảng trống, có thể xuống dòng. Hãy
    tìm các số không giảm (các chữ số theo thứ tự từ trái qua phải tạo thành dãy không giảm) và đếm số lần xuất
    hiện của các số đó.
    
    Đầu vào
    Gồm 1 dãy các số nguyên dương không quá 9 chữ số
    Giới hạn
    Dãy không quá 100000 số.
    Các số đều nguyên dương và không quá 9 chữ số.
    Đầu ra
    Ghi ra các số không giảm kèm theo số lần xuất hiện.
    Các số được liệt kê theo thứ tự sắp xếp số lần xuất hiện giảm dần. Trong trường hợp có nhiều số có cùng số lần
    xuất hiện thì thì số nhỏ hơn sẽ xếp trước.

    Ví dụ :
    Input 01
    888 289 123
    321 54 888
    Output 01
    888 2
    123 1
    289 1
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isIncrease(ll s){
    int tmp = 10;
    while (s != 0){
        if (s % 10 > tmp) return false;
        tmp = s % 10;
        s /= 10;
    }
    return true;
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll s;
    map<ll, ll> mp;
    while (cin >> s){
        if (isIncrease(s)){
            mp[s]++;
        }
    }  
    vector<pair<ll, ll>> v;
    for (auto it : mp){
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}