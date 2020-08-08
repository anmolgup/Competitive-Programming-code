/*
Author:
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%   ANMOL GUPTA      %%%%%%%% 
%%%%%%%%   NIT HAMIRPUR     %%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")
#define pb push_back
#define debug(x)  cout<<'>'<<#x<<" : "<<x<<endl;
#define mp make_pair
#define ff first
#define ss second
#define allunique(v) 	v.erase(unique(v.begin(),v.end()),v.end());
#define MOD 1000000007
#define MOD9 1000000009
#define th(n) cout<<n<<endl
#define gc getchar_unlocked
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed<<setprecision(n)
#define eps 0.000001
#define bolt ios::sync_with_stdio(0)
#define forr(i,n) for(ll i=0;i<n;i++)
#define eof (scanf("%d" ,&n))!=EOF
#define PI acos(-1.0) 
#define inf INT_MAX
#define all(v) v.begin(),v.end() 
#define endl "\n"
typedef long long ll;
typedef double db;
typedef long long ll;
typedef pair< ll, ll > pll;
typedef vector< ll > vll;
typedef map< ll, ll > mll;
typedef set< ll > sll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//printf("%I64d", n)
	ll n,nom,denom,gd;
	cin>>n;
	ll a[n];
	ll b[n];
	forr(i,n)
	 cin>>a[i];
	forr(i,n)
		cin>>b[i];
	map<pll,ll> freq;
	ll nozero = 0;
	for(int  i = 0;i<n;i++)
	{
		denom = a[i];
		nom = -b[i];
		if(denom == 0)
		{
			nozero += (nom)?0:1; 
			continue;
		}
		gd = __gcd(abs(nom),abs(denom));
		nom /= gd;
		denom /= gd;
		if(nom < 0 and denom < 0)
		{	nom = -nom;
			denom = -denom;
		}
		else if(denom < 0 and nom > 0)
		{
			denom = -denom;
			nom = -nom;
		}
		if(nom == 0)
			denom = 0;
		freq[{nom,denom}]++;
	}
	ll ans = 0;
	for(auto i : freq)
	{
		ans = max(ans,i.second);
	}
	ans += nozero;
	th(ans);
}