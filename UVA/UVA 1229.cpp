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
set<string>words;
map<string, int>mp1;
map<int, string>mp3;
map<string, string>mp2;
vector<int>ans;
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
		if (comp.size() > 1)
		{
			
			for(auto i:comp){
				ans.push_back(i);
			}
		}
	}
}
bool vis[N];
void dfs(int node){
	vis[node] = 1;
	words.insert(mp3[node]);
	for (auto i : adj[node])if (!vis[i])dfs(i);
}
void SCC(){
	comps.clear();
	clr(vis, 0);
	dfs_num.clear();
	dfs_num.resize(adj.size(), -1);
	instack.resize(n, 0);
	dfs_low.resize(adj.size());
	ans.clear();
	counter = 0;
	for (int i = 0; i < n; i++){
		if (dfs_num[i] == -1)
			tarjan(i);
	}
	
}
int main(){
	fast

	while (cin >> n){
		if (!n)break;
		cin.ignore();
		adj.resize(n);
		mp1.clear();
		mp2.clear();
		mp3.clear();
		for (int i = 0; i < n; i++){
			string s,x;
			cin >> s;
			getline(cin, x);
			mp1[s] = i; 
			mp3[i] = s;
			mp2[s] = x;
		}
		for(auto i:mp1){
			stringstream ss(mp2[i.first]);
			string a=i.first,b;
			while (ss >> b){
				int  y = mp1[b];
				adj[i.second].push_back(y);
			}
		}
		SCC();
		for (auto i : ans)if (!vis[i]){
			dfs(i);
		}
		cout << words.size() << endl;
		bool f = 1;
		for (auto i : words){
			if(f)cout << i;
			else cout << " " << i;
			f = 0;
		}
		cout << endl;
		words.clear();
		for (auto& v : adj)v.clear();

	}
	stop();
	return 0;
}