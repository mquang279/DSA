/*
[Quay Lui - Nhánh Cận]. Bài 11. Dãy con tăng dần
Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau đôi một. Hãy liệt kê tất cả các 
dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất tăng dần. Dãy con tạo được bằng 
cách lấy ra các phần tử trong dãy a[] nhưng vẫn giữ nguyên thứ tự ban đầu. Coi mỗi dãy con như 
một xâu ký tự với các phần tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự từ điển.

Đầu vào:
-Dòng đầu ghi số n
-Dòng thứ 2 ghi n số của dãy a[]
Đầu ra:
-Đưa ra các dãy con hợp lệ theo thứ tự từ điển tăng dần.

Giới hạn:
2<=n<=20
1<=a[i]<=100

Input 01:
7
4 8 6 7 3 5 2
Output 01:
3 5 
4 5 
4 6 
4 6 7 
4 7 
4 8 
6 7
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
int a[100];
vector<int> v;
set<string> se;

void Try(int i){
    if (v.size() >= 2){
        string tmp = "";
        for (int x : v){
            tmp += to_string(x) + " ";
        }
        se.insert(tmp);
    }
    for (int j = i; j < n; j++){
        if (v.size() == 0 || a[j] > *v.rbegin()){
            v.push_back(a[j]);
            Try(j + 1);
            v.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    Try(0);
    for (string s : se) cout << s << endl;
    return 0;
}