#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        if (digit >= 5) {
            if (i == 0 && digit == 9) {
                continue;
            }
            s[i] = (9 - digit) + '0';
        }
    }
    cout << s << endl;
    return 0;
}
