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
//ll gcd(ll a, ll b){ return !b ? a : gcd(b, a % b); }
ll fixMod(ll a, ll b){ return ((a%b) + b) % b; }
vector<vector<int> >adj;
int n;
int counter = 0;
vector<int>dfs_low, dfs_num;
stack<int>st;
vector<vector<int> >comps;
set<string>ans;
int m = 0;
map<string, int>mp;
map<int,string>mp2;
bool r = 0;
void tarjan(int node, int par){

	dfs_low[node] = dfs_num[node] = counter++;
	int x = 0;
	for (int i = 0; i < adj[node].size(); i++){

		int ch = adj[node][i];
		if (par == ch)continue;

		if (dfs_num[ch] == -1){

			tarjan(ch, node);
			dfs_low[node] = min(dfs_low[node], dfs_low[ch]);

			if (dfs_low[ch] >= dfs_num[node] && par != -1 )
				ans.insert(mp2[node]);
			x++;
		}
		else 
			dfs_low[node] = min(dfs_low[node], dfs_num[ch]);
	}

	if (par == -1 && x > 1)
		ans.insert(mp2[node]);
}
void SCC(){
	comps.clear();
	ans.clear();
	dfs_num.clear();
	dfs_low.clear();
	dfs_num.resize(adj.size(), -1);
	dfs_low.resize(adj.size());
	 m = 0;
	counter = 0;
	for (int i = 0; i < n; i++){
		if (dfs_num[i] == -1)
			tarjan(i, -1);
	}
	for (auto& v : adj)v.clear();
	mp.clear(); mp2.clear();
}
int main(){
	fast
		int T= 1;
	while (cin >> n&&n){
		adj.resize(n);
		for (int i = 0; i < n;i++){
			string s;
			cin >> s;
			mp[s] = i;
			mp2[i] = s;
		}
		int m;
		cin >> m;
		while (m--){
			string a, b;
			cin >> a >> b;
			int x = mp[a], y = mp[b];
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		SCC();
		if (T > 1)
			cout << endl;
		cout << "City map #" <<T++ << ": " << ans.size() << " camera(s) found" << endl;
		for (auto i : ans)cout << i<< endl;
	}
	stop();
	return 0;
}