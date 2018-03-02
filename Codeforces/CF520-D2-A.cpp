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
	fast
		int n;
	string s;
	cin >> n >> s;
	map<char, bool>mp;
	for (int i = 0; i < n; i++){
		if (isupper(s[i]))mp[char(s[i] + 32)] = 1;
		else mp[s[i]] = 1;
	}
	if (mp.size() == 26)cout << "YES" << endl;
	else cout << "NO" << endl;
	stop();
	return 0;
}