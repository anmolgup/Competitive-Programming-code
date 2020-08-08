#include<bits/stdc++.h>
 
#define pb push_back
#define ll long long
#define ull unsigned long long
#define f(i,x,n) for(int i=x;i<n;i++)
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int t; cin >> t;
	while (t--) {
 
		int b, w; cin >> b >> w;
 
		if (w > (3 * b + 1) or b > (3 * w + 1)) {
			cout << "NO\n";
			continue;
		}
 
		cout << "YES\n";
 
		int i = 3;
 
		while (w > 0 and b > 0) {
			cout << "2 " << i << endl;
			w -= (i % 2 == 0);
			b -= (i % 2 == 1);
			i++;
		}
 
		int j = 3;
 
		while (w > 0 and j < i) {
			cout << "1 " << j << endl;
			w--;
			j += 2;
		}
 
		j = 3;
 
		while (w > 0 and j < i) {
			cout << "3 " << j << endl;
			w--;
			j += 2;
		}
 
		j = 4;
 
		while (b > 0 and j < i) {
			cout << "1 " << j << endl;
			b--;
			j += 2;
		}
 
		j = 4;
 
		while (b > 0 and j < i) {
			cout << "3 " << j << endl;
			b--;
			j += 2;
		}
 
		if (w > 0 or b > 0) {
			cout << "2 " << i << endl;
			w--;
			b--;
		}
 
		if (w > 0 or b > 0) {
			cout << "2 2" << endl;
		}
 
 
	}
 
	return 0;
}