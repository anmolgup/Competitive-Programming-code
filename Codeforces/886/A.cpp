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
		ll sum=0;
		vi v(6);
		rep(i,0,6)
		{
			cin>>v[i];
			sum+=v[i];
		}
		if(sum&1)
		{
			cout<<"NO";
			exit(0);
		}
		sum/=2;
		rep(i,0,6)
		{
			rep(j,i+1,6)
			{
				rep(k,j+1,6)
				{
					if(v[i]+v[j]+v[k]==sum)
					{
						cout<<"YES";
						exit(0);
					}
				}
			}
		}
		cout<<"NO";
	}
	return 0;
}