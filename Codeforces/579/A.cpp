#include<bits/stdc++.h>

#define ff first
#define ss second
#define maxn 2000006
#define pb push_back
#define ll long long
#define lll __int128
#define vll vector<ll>
#define mll map<ll,ll>
#define MOD 1000000007
#define pll pair<ll,ll>
#define ull unsigned long long
#define f(i,x,n) for(int i=x;i<=n;i++)

int dx[] = { -1, 0, 1, 0, -1, -1, 1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; t = 1;
	while (t--) {

		ll c, x; cin >> c;
		x = 2;
		ll ans = 0;
		if (c < x or x == 1) ans = c;
		else if (c == x ) ans = 1;
		else {
			while (c > 0) {
				if (c % x == 0) c /= x;
				else {
					ans += (c % x);
					c -= (c % x);
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}