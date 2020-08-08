#include<bits/stdc++.h>
using namespace std;
 
char s[1005][1005];
int dist[1005][1005],visited[1005][1005];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int n,m;
int inf=1<<30;
 
void bfs(int sx,int sy)
{
	int i,j;
	queue<int> q;
	q.push(sx); q.push(sy);
	visited[sx][sy]=1;
	dist[sx][sy]=0;
	while(!q.empty())
	{
		int x=q.front(); q.pop();
		int y=q.front(); q.pop();
		for(i=0;i<4;i++)
		{
			int xx=x+dx[i],yy=y+dy[i];
			if(xx>=0&&xx<n&yy>=0&&yy<m&&!visited[xx][yy]&&s[xx][yy]!='T')
			{
				visited[xx][yy]=1;
				dist[xx][yy]=dist[x][y]+1;
				q.push(xx);
				q.push(yy);
			}
		}
	}
}
 
int main()
{
	int i,j,x,y;
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++) for(j=0;j<m;j++) dist[i][j]=inf;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++) 
		{
			if(s[i][j]=='E') bfs(i,j);
			if(s[i][j]=='S') x=i,y=j;
		}
	int ans=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++) if(s[i][j]>='0'&&s[i][j]<='9')
		{
			if(dist[i][j]<=dist[x][y]) ans+=s[i][j]-'0';
		}
	cout<<ans<<endl;
}