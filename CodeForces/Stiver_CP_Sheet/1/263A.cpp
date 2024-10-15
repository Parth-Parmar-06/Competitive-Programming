// A. Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
int main() {
    int p, q;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            int k;
            scanf("%d", &k);
            if (k==1) {
                p=i+1; q=j+1;
            }
        } 
    }
    int ans = abs(p-3)+abs(q-3);
    cout << ans;
}