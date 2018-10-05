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
vector<bool>instack;
stack<int>st;
vector<vector<int> >comps;
void tarjan(int node){
	dfs_low[node] = dfs_num[node] = counter++; instack[node] = 1;
	st.push(node);
	for (int i = 0; i < adj[node].size(); i++){
		int ch = adj[node][i];
		if (dfs_num[ch] == -1){
			tarjan(ch);
			dfs_low[node] = min(dfs_low[node], dfs_low[ch]);
		}
		else if (instack[ch]) dfs_low[node] = min(dfs_low[node], dfs_num[ch]);

	}
	if (dfs_low[node] == dfs_num[node]){
		vector<int>comp;
		int i = -1;
		while (i != node){
			i = st.top();
			instack[i] = 0;
			st.pop();
			comp.push_back(i);
		}
		comps.push_back(comp);
	}
}
void SCC(){
	comps.clear();
	dfs_num.clear();
	dfs_num.resize(adj.size(), -1);
	instack.resize(n, 0);
	dfs_low.resize(adj.size());
	counter = 0;
	for (int i = 0; i < n; i++){
		if (dfs_num[i] == -1)
			tarjan(i);
	}
	for (auto& v : adj)v.clear();
}
map<string, int>mp1;
int main(){
	fast

	while (cin >> n >> m){
		if (!m&&!n)break;
		cin.ignore();
		adj.resize(n);
		for (int i = 0; i < n; i++){
			string s;
			getline(cin, s);
			mp1[s] = i;
		}
		for (int i = 0; i < m; i++){
			string a, b;
			getline(cin, a);
			getline(cin, b);
			int x = mp1[a], y = mp1[b];
			adj[x].push_back(y);
		}
		SCC();
		cout << comps.size() << endl;
	}
	stop();
	return 0;
}