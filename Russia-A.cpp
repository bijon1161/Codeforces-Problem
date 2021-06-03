#include "bits/stdc++.h"

using namespace std;
typedef long long LL;

int main() {
    int T;
    scanf("%d", &T);
    LL Max[T] = {}, num[T] = {}, Mx = 0;

    for (int i = 0 ; i < T; ++i) {
        scanf("%d", &num[i]);
        for (int j = 0; j < num[i]; ++j) {
            LL x;
            scanf("%lld", &x);
            Max[i] = max(Max[i], x);
        }
        Mx = max(Mx, Max[i]);
    }
    LL ans = 0;
    for (int i = 0; i < T; ++i) {
        ans += (Mx - Max[i])*num[i];
    }
    printf("%lld\n", ans);
}
