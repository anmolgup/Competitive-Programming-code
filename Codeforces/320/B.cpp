#include<iostream>
#include<string.h>
using namespace std;

int a[111],b[111];

bool f[111];
int n = 0;
void dfs(int i)
{
    f[i] = true;
    for(int k = 1; k <= n;k++)
    {
        if(f[k])
            continue;
        if(a[i]>a[k] && a[i] < b[k])
            dfs(k);
        else if(b[i] > a[k] && b[i] < b[k])
            dfs(k);
    }
}


int k;

int main()
{
    cin >> k;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(f,0,sizeof(f));
    for(int i = 1; i <= k; i++)
    {
        int x,y,m;
        cin >> m;
        if(m == 1)
        {
            n++;
            cin >> a[n];
            cin >> b[n];
        }
        if(m == 2)
        {
            cin >> x;
            cin >> y;
            memset(f,0,sizeof(f));
            dfs(x);
            if(f[y])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}