#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
#define MP make_pair
#define PB push_back
#define ll long long
#define int long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define mod 1000000007
int a[150001],dp[150001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    f(i,1,n+1)
    {
        cin>>a[i];
        dp[i]=dp[i-1]+a[i];
    }
    int ans=mod;
    int val=0;
    for(int i=0;i+k<=n;i++)
    {
        int va=dp[i+k]-dp[i];

        if(ans>va)
        {
            ans=va;
            val=i+1;
        }
    }
    cout<<val<<endl;
    return 0;
}