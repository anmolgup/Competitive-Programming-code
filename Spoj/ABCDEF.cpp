#include <bits/stdc++.h>
using namespace std;
 
#define inf (1<<30)-1
#define INF (1LL<<62)-1
#define MOD 1000000007LL
#define MP make_pair
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define PI acos(-1)
#define MEM(x,y) memset(x,y,sizeof (x))
#define debug cout<<"A"<<'\n'
#define REP(i,a,b) for (int i=(a); i<=(b); i++)
#define PER(i,a,b) for (int i=(a); i>=(b); i--)
#define REPL(i,a,b) for (LL i=(a); i<=(b); i++)
#define PERL(i,a,b) for (LL i=(a); i>=(b); i--)
#define print(x) cout<<x<<'\n'
#define dprint(a,x) cout<<setprecision(x)<<fixed<<a<<'\n'
#define itrALL(c,itr) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int,int>PII;
typedef pair<LL,LL>PLL;
typedef set<int> SI;
typedef set<LL> SL;
typedef set<string> SS;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<string> VS;
typedef map<int,int> MII;
typedef map<LL,LL> MLL;
typedef queue<int> QI;
 
/* Direction Array */
 
// int fx[]={1,-1,0,0};
// int fy[]={0,0,1,-1};
// int fx[]={0,0,1,-1,-1,1,-1,1};
// int fy[]={-1,1,0,0,1,1,-1,-1};
 
template <class T> inline T bigmod(T p,T e,T M)
{
    T ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
 
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T, class X> inline bool getbit(T a, X i) { T t=1; return ((a&(t<<i))>0);}
template <class T, class X> inline T setbit(T a, X i) { T t=1;return (a|(t<<i)); }
template <class T, class X> inline T resetbit(T a, X i) { T t=1;return (a&(~(t<<i)));}
 
inline LL power(LL a, LL b)
{
    LL multiply=1;
    REP(i,1,b)
    {
        multiply*=a;
    }
    return multiply;
}
inline LL ABS(LL a){return (a>=0)?a:-a;}
 
/*end of header*/
int n,arr[104];
LL ans;
unordered_map<int,int>mp;
int main()
{
    //freopen("input_file_name.in","r",stdin);
    //freopen("output_file_name.out","w",stdout);
    scanf("%d",&n);
    REP(i,1,n)scanf("%d",&arr[i]);
    REP(i,1,n)
    {
        REP(j,i,n)
        {
            REP(k,1,n)
            {
                if(mp.find(arr[i]*arr[j]+arr[k])==mp.end())mp[arr[i]*arr[j]+arr[k]]=0;
                if(i==j)mp[arr[i]*arr[j]+arr[k]]++;
                else mp[arr[i]*arr[j]+arr[k]]+=2;
            }
        }
    }
    ans=0;
    REP(i,1,n)
    {
        if(arr[i]==0)continue;
        REP(j,1,n)
        {
            REP(k,j,n)
            {
                if(mp.find(arr[i]*(arr[j]+arr[k]))==mp.end())continue;
                if(j==k)ans+=mp[arr[i]*(arr[j]+arr[k])];
                else ans+=2LL*mp[arr[i]*(arr[j]+arr[k])];
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
