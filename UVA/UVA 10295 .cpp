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

int sum;
int main() {
	fast
		int n, m;
	cin >> m >> n;
	map<string, int>mp;
	while (m--){
		string a;
		int b;
		cin >> a >> b;
		mp[a] = b;
		//cout << mp[a] << endl;
	}
	while (n--){
		string s;
		ll ans = 0;
		while (cin >> s){
			if (s == ".")break;
			ans += mp[s];
		}
		cout << ans << endl;
	}
	stop();
	return 0;
}
