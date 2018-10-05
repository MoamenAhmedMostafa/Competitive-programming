#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-8;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int>P;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
const int N = 500001;
#define endl '\n'
#define F first
#define S second
#define pii pair<int,int>
#define pll pair<ll,ll>
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
struct point{
	double x, y;
};
ll gcd(ll a, ll b){ return !b ? a : gcd(b, a % b); }
ll fixMod(ll a, ll b){ return ((a%b) + b) % b; }
double triangle_area(int x1, int y1, int x2, int y2, int x3, int y3) {
	return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.;
};
ll dis(point a, point b) {
	ll x = a.x - b.x, y = a.y - b.y;
	return x * x + y * y;
}
int n, m;
bool vis[10004];
vector<vector<int> >v;
stack<int>st;
void dfs(int node, bool ok){
	vis[node] = 1;
	for (auto i : v[node]){
		if (!vis[i])dfs(i, ok);
	}
	if (ok)st.push(node);
}
int To_Sort(){
	clr(vis, 0);
	for (int i = 0; i < n; i++)if (!vis[i])dfs(i, 1);
	clr(vis, 0);
	int ans = 0;
	while (st.size()){
		
		int node = st.top();
		st.pop();
		if (!vis[node]){
			dfs(node, 0);
			ans++;
		}
	}
	for (auto &i : v)i.clear();
	return ans;
}
int main(){
	fast
		int T = 1;
	int t;
	cin >> t;
	while (t--){
		cin >> n >> m;
		v.resize(n);
		for (int i = 0; i < m; i++){
			int a, b;
			cin >> a >> b;
			a--; b--;
			v[a].push_back(b);
		}
		cout <<"Case "<<T++<<": "<<To_Sort() << endl;
	}
	stop();
	return 0;
}