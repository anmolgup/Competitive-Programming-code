#include<bits/stdc++.h>
using namespace std ;
 int main()
 {
     int  n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         
     }
     sort(a,a+n);
     cout<<1<<' '<<a[0]<<endl;
     if(a[n-1]==0)
     {
         cout<<2<<' '<<a[1]<<' '<<a[2]<<endl;
         cout<<n-3<<' ';
         for(int i=3;i<n;i++)
         cout<<a[i]<<' ';
     }
     else {
         cout<<1<<' '<<a[n-1]<<' '<<endl;
         cout<<n-2<<' ';
         for(int i=1;i<n-1;i++)
         cout<<a[i]<<' ';
     }
 }