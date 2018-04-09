#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-8;
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
vector<vector<pair<ll, ll> > >v;
int n;
bool vis[100001];
ll MN(int node){
	ll mn = 0;
	vis[node] = 1;
	for (auto i : v[node]){
		if (!vis[i.first]){
			mn = max(mn, i.second + MN(i.first));
		}
	}
	return mn;
}
int main(){
	fast
		cin >> n;
	v.resize(n);
	n--;
	ll ans = 0;
	while (n--){
		ll a,b, w;
		cin >> a >> b >> w;
		v[b - 1].push_back({ a - 1, w });
		v[a - 1].push_back({ b - 1, w });
		ans += w;
	}
	cout << ans*2-MN(0) << endl;
	stop();
	return 0;
}