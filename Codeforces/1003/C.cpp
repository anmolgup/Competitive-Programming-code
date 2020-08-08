/*
Author:
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%   ANMOL GUPTA      %%%%%%%% 
%%%%%%%%   NIT HAMIRPUR     %%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
*/
#include<bits/stdc++.h>
#define rep(i,start,lim) for(lld i=start;i<lim;i++)
#define repd(i,start,lim) for(lld i=start;i>=lim;i--)
#define scan(x) scanf("%lld",&x)
#define print(x) printf("%lld ",x)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define br printf("\n")
#define sz(a) lld((a).size())
#define YES printf("YES\n")
#define NO printf("NO\n")
#define all(c) (c).begin(),(c).end()
#define INF         1011111111
#define LLINF       1000111000111000111LL
#define EPS         (double)1e-10
#define MOD         1000000007
#define PI          3.14159265358979323
using namespace std;
typedef long double ldb;
typedef long long lld;
lld powm(lld base,lld exp,lld mod=MOD) {lld ans=1;while(exp){if(exp&1) ans=(ans*base)%mod;exp>>=1,base=(base*base)%mod;}return ans;}
lld ctl(char x,char an='a') {return (lld)(x-an);}
char ltc(lld x,char an='a') {return (char)(x+an);}
#define bit(x,j) ((x>>j)&1)
typedef vector<lld> vlld;
typedef pair<lld,lld> plld;
typedef map<lld,lld> mlld;
typedef set<lld> slld;
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mxm(a,b) a = max(a,b)
#define mnm(a,b) a = min(a,b)
#define endl '\n'
#define fre freopen("1.in","r",stdin); freopen("1.out","w",stdout);
#define N 1000005
lld a[N];
int main()
{
    //sync;
    lld n,k;
    cin>>n>>k;
    rep(i,1,n+1) cin>>a[i];
    ldb ans = 0;
    rep(i,1,n+1) {
        lld sm = 0;
        rep(j,i,n+1) {
            sm += a[j];
            if((j-i+1) >= k) {
                ans = max(ans, ((ldb)sm / (j-i+1)));
            }
        }
    }
    cout<<fixed<<setprecision(15)<<ans;
    return 0;
}