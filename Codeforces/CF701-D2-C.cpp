#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define endl '\n'
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
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int main() {
	fast
		int n;
	cin >> n;
	string s;
	cin >> s;
	set<char>st;
	for (int i = 0; i < n; i++){
		st.insert(s[i]);
	}
	int l = 0, r = 0;
	int ans = 1e9;
	int sz = st.size();
	map<char, int>mp;
	while (l <= r&&l < n){
		while (r < n&&mp.size()!=sz){
			mp[s[r]]++;
			r++;
		}
		if (mp.size() == sz){
			ans = min(ans, r - l );
		}
		
			mp[s[l]]--;
			if (mp[s[l]]==0)
			mp.erase(s[l]);
		l++;
	}
	cout << ans << endl;
	stop();
	return 0;
}