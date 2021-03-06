/* 
chirag11032000
Chirag Thakur
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double db;
typedef pair < ll, ll > pll;

#define pb push_back
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll N = 3e3 + 10;

map < string, string > to_second;

int main() {
	fast_io();
	ll n, m;
	cin >> n >> m;
	for (ll i = 1; i <= m; ++i) {
		string a, b;
		cin >> a >> b;
		to_second[a] = b;
	}
	for (ll i = 1; i <= n; ++i) {
		string s, t;
		cin >> s;
		t = to_second[s];
		if (t.size() >= s.size()) {
			cout << s << " ";
		} else {
			cout << t << " ";
		}
	}
	cout << "\n";
	return 0;
}