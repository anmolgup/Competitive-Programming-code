#include <bits/stdc++.h>

using namespace std;

int t, n;
string s;

int main(){
	cin >> t;
	for(int tc = 0; tc < t; ++tc){
		cin >> n >> s;
		int res = n - 1;
		for(int i = 0; i < n; ++i)
			if(s[i] == '>' || s[n - 1 - i] == '<')
				res = min(res, i);
		
		cout << res << endl;
	}

	return 0;
}