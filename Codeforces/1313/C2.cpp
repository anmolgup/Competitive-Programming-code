#include<bits/stdc++.h>
#define MOD 1000000007
#define md 998244353
#define INF LLONG_MAX
#define F first
#define S second
#define sz(x) x.size()
#define vi vector<int>
#define vll vector<long long>
#define vpl vector<pair<long long,long long> >
#define vpi vector<pair<int,int> >
#define pb push_back
#define debug(x) cerr<<#x<<"= "<<x<<endl
#define all(v) v.begin(),v.end()
#define TT ll test;cin>>test; while(test--)
#define rep(i,a,n) for(ll i=a;i<(long long)n;++i)
#define repr(i,n,a) for(ll i=n;i>(long long)a;--i)
//#define endl '\n'
#define MAXN 5005
typedef long long ll;
typedef long double ld;
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;
    cin>>n;
    vll a(n+2,0);
    rep(i,1,n+1){
    	cin>>a[i];
    }
    ll sum=0;
    vll pre(n+2),suf(n+2),par1(n+2),par2(n+2);
 
    par1[1]=0;par2[n]=n+1;
    rep(i,2,n+1){
    	if(a[i]>=a[i-1]){
    		par1[i]=i-1;
    	}else{
 
    		par1[i]=par1[i-1];
    		while(a[i]<a[par1[i]]){
    			par1[i]=par1[par1[i]];
    		}
    	}
    }
 
    repr(i,n-1,0){
    	if(a[i]>=a[i+1]){
    		par2[i]=i+1;
    	}else{
    		par2[i]=par2[i+1];
    		while(a[i]<a[par2[i]]){
    			par2[i]=par2[par2[i]];
    		}
    	}
    }
    rep(i,1,n+1){
    	pre[i]=a[i]*(i-par1[i])+pre[par1[i]];
    }
    repr(i,n,0){
    	suf[i]=a[i]*(par2[i]-i)+suf[par2[i]];
    }
    rep(i,1,n+1){
    	ll temp=pre[i]+suf[i]-a[i];
    	if(temp>sum){
    		sum=temp;
    	}
    }
    rep(i,1,n+1){
    	ll temp1=pre[i]+suf[i]-a[i];
    	if(temp1==sum){
    		ll cur=a[i];
    		repr(j,i-1,0){
    			a[j]=min(a[j],cur);
    			cur=a[j];
    		}
    		cur=a[i];
    		rep(j,i+1,n+1){
    			a[j]=min(a[j],cur);
    			cur=a[j];
    		}
    		rep(i,1,n+1){
    			cout<<a[i]<<" ";
			}
    		return 0;
    	}
    }
 
 
 
    return 0;
}