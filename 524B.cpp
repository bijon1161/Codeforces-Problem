
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int Q;
    cin >> Q;

    while (Q--) {
        int l, r, sum;
        cin >> l >> r;

        sum = (r+1-l)/2;
        if (l%2 == 0) sum = -sum;
        if ((r+1-l)%2) {
            if (r%2) sum -= r;
            else sum += r;
        }

        cout << sum << '\n';
    }

}
