#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;
 
#define N  100005
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll n;
		cin>>n;
		vi a(n+1);
		rep(i,1,n+1) cin>>a[i];
		ll s,f;
		cin>>s>>f;
		f--;
		rep(i,2,n+1)
		a[i]+=a[i-1];
		ll ans=0,st=1;
		rep(i,1,n+1)
		{
			ll l=(s-i+n)%n+1;
			ll r=(f-i+n)%n+1;
			ll cur=0;
			if(r>=l)
				cur=a[r]-a[l-1];
			else
				cur=(a[n]-a[l-1])+a[r];
			if(cur>ans)
				ans=cur,st=i;
		}
		cout<<st;
	}
	return 0;
}