/*
[Thuật Toán Sinh]. Bài 20. Xâu nhị phân đối xứng chẵn
Nhiệm vụ của bạn là hãy liệt kê các xâu nhị phân thuận nghịch có độ dài chẵn theo thứ tự từ điển với chiều dài không quá n kí tự.
Gợi ý : Để sinh xâu nhị phân có độ dài chẵn đối xứng n bạn chỉ cần sinh xâu nhị phân có độ dài n / 2, 
lật ngược lại xâu và nối vào xâu ban đầu sẽ thu được xâu có độ dài chẵn mà đối xứng.

Đầu vào:
-Dòng duy nhất chứa số nguyên N.
Đầu ra:
-In ra các xâu nhị phân đối xứng có độ dài chẵn theo thứ tự từ điển.

Giới hạn:
2<=N<=30

Input 01:
4
Output 01:
00
0000
0110
1001
11
1111
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int currLength = 1;
bool isFinal = false;

void sinh(string& s){
    int i = currLength - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if (i < 0){
        isFinal = true;
        return;
    }
    s[i] = '1';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> v;
    while (currLength <= n / 2){
        string s = string(currLength, '0');
        while (!isFinal){
            string reversed = s;
            reverse(reversed.begin(), reversed.end());
            v.push_back(s + reversed);
            sinh(s);
        }
        isFinal = false;
        currLength++;
    }
    sort(v.begin(), v.end());
    for (string s : v) cout << s << endl;
    return 0;
}