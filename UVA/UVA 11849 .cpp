#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
int main() {
	fast;
	string s;
	set<string>st;
	string x = "";
	while (cin >> s){
		for(int i=0;i<s.size();i++){
			if (isalpha(s[i]))x += isupper(s[i]) ? char(s[i] + 32) : s[i];
			else{
				if (x != ""& (i + 1 != s.size() && s[i] == '-')){
					x += '-';
				}
				else {
					if (s[i] == '-'&&i + 1 == s.size())continue;
					if (x != "")
					st.insert(x);
					x = "";
				}
			}
		}
		if (s[s.length() - 1] != '-'&&x != "")st.insert(x), x = "";
		
	}
	for (auto i : st)cout << i << endl;
	stop();
	return 0;
}