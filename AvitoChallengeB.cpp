
#include<bits/stdc++.h>

using namespace std;

int n;
int a[110000], ans[110000];
vector <int> V[110000];

int main() {
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		a[i] = n - 1 - a[i] + 1;
		V[a[i]].push_back(i);
	}
	for (int i = 1; i <= n; i++) {
		if (V[i].size() % i != 0) {
			printf("Impossible\n");
			return 0;
		}
		for (int j = 0; j < (int) V[i].size(); j++) {
			if (j % i == 0) {
				cnt++;
			}
			ans[V[i][j]] = cnt;
		}
	}
	printf("Possible\n");
	for (int i = 1; i <= n; i++) {
		printf("%d", ans[i]);
		if (i < n)
			printf(" ");
		else
			printf("\n");
	}
}
