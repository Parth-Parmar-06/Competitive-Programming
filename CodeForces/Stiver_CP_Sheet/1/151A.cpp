// Soft Drinking
#include<iostream>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int ans = min(k*l/nl, c*d);
    ans = min(ans, p/np);
    ans /= n;
    printf("%d", ans);
}