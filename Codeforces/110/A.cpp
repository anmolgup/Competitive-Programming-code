#include<bits/stdc++.h>
using namespace std;
int main(){
	 string s;
	 int m = 0;
	 cin >> s;
	 for (int i = 0; i < s.size(); ++i){
	     if(s[i] == '7' || s[i] == '4' )
	     ++m;
	 }
	 if(m == 4 || m == 7)
	 cout << "YES";
	 else
	 cout << "NO";
}