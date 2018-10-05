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
vector<vector<int> >adj;
int n, m;
int counter = 0;
vector<int>dfs_low, dfs_num;
stack<int>st;
vector<vector<int> >comps;
set<int>ans;
void tarjan(int node, int par){
	dfs_low[node] = dfs_num[node] = counter++;
	int f = 0;
	for (int i = 0; i < adj[node].size(); i++){
		int ch = adj[node][i];
		if (dfs_num[ch] == -1){
			tarjan(ch, node);
			dfs_low[node] = min(dfs_low[node], dfs_low[ch]);
			if (dfs_low[ch] >= dfs_num[node]){
				if (dfs_num[node] == 0 && !f)
					f = 1;
				else ans.insert(node);
			}
		}
		else if (par != ch){
			dfs_low[node] = min(dfs_low[node], dfs_num[ch]);
		}
	}
}
void SCC(){
	comps.clear();
	dfs_num.clear();
	dfs_num.resize(adj.size(), -1);
	dfs_low.resize(adj.size());
	ans.clear();
	counter = 0;
	for (int i = 0; i < n; i++){
		if (dfs_num[i] == -1)
			tarjan(i, -1);
	}
	for (auto& v : adj)v.clear();
}
int main(){
	fast
	while (cin >> n&&n){
		adj.resize(n);
		string s;
		while (getline(cin, s) && s != "0"){
			int x = -1, y;
			stringstream ss(s);
			while (ss >> y){
				if (x == -1)x = y - 1;
				else {
					adj[x].push_back(y - 1);
					adj[y - 1].push_back(x);
				}
			}
		}
		SCC();
		cout << ans.size() << endl;
	}
	stop();
	return 0;
}