#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    for (int i=0; i<n; i++) {
        string in;
        cin >> in;
        if (in[1] == '+') x++;
        else x--;
    }
    cout << x;
}