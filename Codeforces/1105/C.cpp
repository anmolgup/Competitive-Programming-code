#include<bits/stdc++.h>

using namespace std;

const long long mod=1000000007;
long long f[500010][3],cnt[3];

int main()
{
	long long n,l,r;
	cin>>n>>l>>r;
	l--;
	cnt[0]=r/3-l/3;
	cnt[1]=r/3+(r%3>=1)-(l/3)-(l%3>=1);
	cnt[2]=r/3+(r%3==2)-(l/3)-(l%3==2);
	f[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=2;j++){
			for(int k=0;k<=2;k++){
				int t=j-k;
				if(j<k)t+=3;
				f[i][j]=(f[i][j]+(f[i-1][k]*cnt[(t+3)%3])%mod)%mod;
			}
		}
	}
	cout<<f[n][0]<<endl;
	return 0;
}