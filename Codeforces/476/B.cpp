/*
Author:
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%   ANMOL GUPTA      %%%%%%%% 
%%%%%%%%   NIT HAMIRPUR     %%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
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
ll fact(ll a)
{
	ll f = 1;
	for(ll i =2;i<=a;i++)
		f *= i;
	return f;
	// if(a < 2)
		// return 1;
	// return a*fact(a-1);/
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//printf("%I64d", n)
	string s1,s2;
	cin>>s1>>s2;
	cout<<prec(10);
	ll final_pos,curr_pos,k;
	final_pos = curr_pos = k = 0;
	for(int i = 0;i<s1.size();i++)
		if(s1[i] == '+')
			final_pos++;
		else
			final_pos--;
	for(int i = 0;i<s2.size();i++)
	{
		if(s2[i] == '?')
			k++;
		else if(s2[i] == '+')
			curr_pos++;
		else
			curr_pos--;
	}
	vll poss;
	double ans = 0;
	if(k == 0)
	{
		if(curr_pos == final_pos)
			ans = 1;
		else
			ans = 0;
		cout<<prec(10);
		cout<<ans<<endl;
		return 0;

	}
	ll denom = 0;
	ll num = fact(k);
	// debug(k);
	mll freq;
	for(int i = 0;i<=k;i++)
	{
		ll p = curr_pos + k - 2*i;
		ll temp = num/(fact(i));
		temp /= (fact(k-i));
		// if(p == 0)
			// debug(temp);
		freq[p] = temp;
		// temp--;
		// denom += temp;
		// debug(denom);
		// poss.pb(p);
	}
	ll range = freq[final_pos];
	for(auto i: freq)
		denom += i.ss;
	// debug(range);
	// debug(denom);
	// denom += poss.size();
	// sort(all(poss));
	// for(auto i:poss)
		// cout<<i<<endl;
	// ll range = upper_bound(all(poss),final_pos) - poss.begin() - (lower_bound(all(poss),final_pos) - poss.begin());
	ans = double(range)/(double)denom;
	cout<<ans;
}