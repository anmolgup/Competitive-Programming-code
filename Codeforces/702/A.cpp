
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
int a[100001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0,c=0;
    f(i,1,n+1)
    {
        cin>>a[i];
    }
    f(i,1,n+1)
    {
        if(a[i]>a[i-1])
        {
            c++;
            ans=max(c,ans);
        }
        else
        {
            c=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}