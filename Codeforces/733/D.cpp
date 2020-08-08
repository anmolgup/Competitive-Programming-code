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
    int n;
    cin >> n;
    map < pair < int, int >, vector < pii > > mp;
    for (int i = 0, a[3]; i < n; ++i) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        map < pair < int, int >, bool > ok;
        mp[{a[0], a[1]}].eb(a[2], i + 1), ok[{a[0], a[1]}] = true;
        if (!ok[{a[0], a[2]}]) {
            mp[{a[0], a[2]}].eb(a[1], i + 1), ok[{a[0], a[2]}] = true;
        }
        if (!ok[{a[1], a[2]}]) {
            mp[{a[1], a[2]}].eb(a[0], i + 1);
        }
    }
    int cur = 0;
    set < int > ans;
    for (auto &x: mp) {
        sort(all(x.S), greater < pii >());
        if (x.S.size() > 1) {
            if (min({x.S[0].F + x.S[1].F, x.F.F, x.F.S}) > cur) {
                cur = min({x.S[0].F + x.S[1].F, x.F.F, x.F.S});
                ans.clear();
                ans.insert(x.S[0].S), ans.insert(x.S[1].S);
            }
        } else {
            if (min({x.S[0].F, x.F.F, x.F.S}) > cur) {
                cur = min({x.S[0].F, x.F.F, x.F.S});
                ans.clear();
                ans.insert(x.S[0].S);
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto &x: ans) {
        cout << x << " ";
    }
    cout << "\n";
}