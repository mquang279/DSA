/*
    [Thuật Toán Sinh]. Bài 14. Số lộc phát
    Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là "Lộc Phát" nếu thỏa mãn các điều kiện sau:
    Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6.
    Không có 2 chữ số 8 nào ở cạnh nhau.
    Không có nhiều hơn 3 chữ số 6 ở cạnh nhau.
    Viết chương trình liệt kê các xâu ký tự phát lộc độ dài N theo thứ tự tăng dần.

    Đầu vào:
    -Số nguyên dương N.
    Đầu ra:
    -Các xâu lộc phát thỏa mãn điều kiện

    Input 01:
    7
    Output 01:
    Copy
    8666866
    8668666
    8668686
    8686686
    8686866
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
string s;
bool isFinal = false;

bool check(string s){
    if (s[0] != '8' || s[s.length() - 1] != '6') return false;
    int cnt6 = 0, cnt8 = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '8'){
            cnt8++;
            cnt6 = 0;
        }
        else{
            cnt6++;
            cnt8 = 0;
        }
        if (cnt8 >= 2) return false;
        if (cnt6 >= 4) return false;
    }
    return true;
}

void sinh(){
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = '8';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    s = "8";
    for (int i = 1; i < n; i++){
        s += "6";
    }
    while (!isFinal){
        if (check(s)) cout << s << endl;
        sinh();
    }
    return 0;
}