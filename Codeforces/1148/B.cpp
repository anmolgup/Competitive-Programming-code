#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template < typename T > using ordered_set = tree < T, null_type, less < T >, rb_tree_tag, tree_order_statistics_node_update >;
template < typename T > using MinPriorityQueue = priority_queue < T, vector < T >, greater < T > >;

#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cout << name << " : " << arg1 << std :: endl;
}
template < typename Arg1, typename... Args >
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    int len = comma - names;
    for (int i = 0; i < len; ++i) {
        cout << names[i];
    }
    cout <<  " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef pair < int, int > pii;
typedef vector < ll > vll;
typedef vector < int > vi;

#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll LINF = LLONG_MAX, base = 1e9, MOD = 1e9 + 7, N = 1e5 + 5, M = 1e3 + 5;
const int INF = INT_MAX;
const db PI = acos(-1);

void test();

int main() {
    fast_io();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    test();
    #ifndef ONLINE_JUDGE
        cout << "Time: " << (int)(clock() * 1000. / CLOCKS_PER_SEC) << "ms";
    #endif
    return 0;
}

void test() {
    ll n, m, a, b, k;
    cin >> n >> m >> a >> b >> k;
    ll x[n], y[m];
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> y[i];
    }
    if (k >= min(n, m)) {
        cout << "-1\n";
        return;
    }
    ll ans = 0;
    for (int i = 0; i <= k; ++i) {
        ll cur = x[i];
        ll pos = lower_bound(y, y + m, cur + a) - y;
        ll j = pos + k - i;
        if (j >= m) {
            cout << "-1\n";
            return;
        }
        ans = max(ans, y[pos + k - i] + b);
    }
    cout << ans << "\n";
}