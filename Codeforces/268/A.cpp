/* Author 
   Anmol Gupta
*/
#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define pb push_back
#define debug(x)  cout<<#x<<" "x<<endl;
#define mp make_pair
#define F first
#define S second
#define allunique(v) 	v.erase(unique(v.begin(),v.end()),v.end());
#define endl "\n"
#define MOD 1000000007
#define MOD9 1000000009
#define gc getchar_unlocked
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed<<setprecision(n)
#define eps 0.000001
#define pll pair<ll,ll>
#define all(v) v.begin(), v.end()
#define bolt ios::sync_with_stdio(0)
#define forr(i,n) for(ll i=0;i<n;i++)
#define eof (scanf("%d" ,&n))!=EOF
typedef long long ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//printf("%I64d", n)
	ll n,res,q,r,temp;
	res = 0;
	cin>>n;
	vector < pll> v;
	forr(i,n)
	{
		cin>>q>>r;
		v.pb(mp(q,r));
	}
	for(int i = 0;i<n;i++)
	{
		temp = v[i].first;
		for(int j = 0;j<n;j++)
		{
			if(j!= i)
			{
				if(v[j].second == temp)
					res++;
			}
		}
	}
	cout<<res<<endl;
}