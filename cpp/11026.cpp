
#include <iostream>
#include <algorithm>

using namespace std;

long long dp[1005][1005];

int main() {
	int n, m, A[1005], i, j;
	while (cin >> n >> m) {
		if (n + m == 0)    break;
		for (i = 1; i <= n; i++)
			cin >> A[i];
		dp[0][0] = 1;
		for (i = 1; i <= n; i++) {
			dp[i][0] = 1;
			for (j = 1; j <= i; j++) {
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1] * A[i];
				if (dp[i][j] >= m)
					dp[i][j] %= m;
			}
		}
		long long ret = 0;
		for (i = 1; i <= n; i++)
			ret = max(dp[n][i], ret);
		cout << ret << endl;
	}
	return 0;
}
