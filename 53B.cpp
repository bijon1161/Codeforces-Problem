#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,  mx;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector <int> a(n+1);

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a[x] = i;
    }

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        cout << max(0, a[x] - mx) << ' ';
        mx = max(mx, a[x]);
    }

}
