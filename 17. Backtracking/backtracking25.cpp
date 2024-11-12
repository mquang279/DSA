/*
[Quay Lui - Nhánh Cận]. Bài 25. Palindrome num
Cho một số nguyên dương N có không quá 16 chữ số, bạn được phép tách các chữ số của N thành 
các số nhỏ hơn và phải đảm bảo các số tách được đều là số thuận nghịch, bạn cũng ko được phép 
đảo thứ tự các chữ số của N. Hãy in ra mọi cách tách như vậy.

Đầu vào:
• Dòng duy nhất chứa N
Đầu ra:
• In ra các cách tách N thành các số nhỏ thuận nghịch nhỏ hơn

Giới hạn
• 1<=N<=10^16

Input 01:
282882
Output 01:
2 8 2 8 8 2 
2 8 2 88 2 
2 8 2882 
2 828 8 2 
282 8 8 2 
282 88 2
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;
vector<string> v;

bool isPalindrome(string s){
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}

void Try(int i){
    if (i == s.length()){
        for (string x : v) cout << x << " ";
        cout << endl;
        return;
    }
    string tmp = "";
    for (int j = i; j < s.length(); j++){
        tmp += s[j];
        if (isPalindrome(tmp)){
            v.push_back(tmp);
            Try(j + 1);
            v.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> s;
    Try(0);
    return 0;
}