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
ll gcd(ll a, ll b){ return !b ? a : gcd(b, a % b); }
ll fixMod(ll a, ll b){ return ((a%b) + b) % b; }
double triangle_area(int x1, int y1, int x2, int y2, int x3, int y3) {
	return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2.;
};
struct point{
	double x, y, d;
};
vector<vector<int> >adj;
vector<point>v;
int n;
bool vis[10000];
stack<int>st;
void top_sort(int node, bool x){
	vis[node] = 1;
	for (int j = 0; j < adj[node].size(); j++){
		int ch = adj[node][j];
		if (!vis[ch])top_sort(ch, x);
	}
	if (x)st.push(node);
}
int main(){
	fast
		int t;
	cin >> t;
	while (t--){
		cin >> n;
		adj.resize(n);
		v.resize(n);
		for (int i = 0; i < n; i++){
			cin >> v[i].x >> v[i].y >> v[i].d;
			v[i].d /= 2;
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (i == j)continue;
				if (v[j].x >= v[i].x - v[i].d&&v[j].x <= v[i].x + v[i].d&&v[j].y >= v[i].y - v[i].d&&v[j].y <= v[i].y + v[i].d)
					adj[i].push_back(j);
			}
		}

			clr(vis, 0);
			int ans = 0;
			for (int i = 0; i < n; i++)if (!vis[i])top_sort(i, 1);
			clr(vis, 0);
			while (st.size()){
				int node = st.top();
				st.pop();
				if (!vis[node]){
					top_sort(node, 0);
					ans++;
				}
			}
			for (int i = 0; i < n; i++){
				if (!vis[i]){
					top_sort(i, 0);
					ans++;
				}
			}
			cout << ans << endl;
			v.clear();
			for (auto& i : adj)i.clear();
		}
	stop();
	return 0;
}