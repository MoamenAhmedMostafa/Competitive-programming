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
typedef pair<int, int>P;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
const int N = 500001;
#define endl '\n'
#define X first
#define Y second
#define	mp make_pair
const ll inf = 2e18;
#define pii pair<int,int>
#define pll pair<ll,ll>
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}

int n, r1, r2;
vector<vector<int> >v;
bool vis[N];
int ans[N];
void dfs(int node){
	vis[node] = 1;
	for (int i = 0; i < v[node].size(); i++){
		int ch = v[node][i];
		if (vis[ch] || ans[ch])continue;
		ans[ch] = node;
		dfs(ch);
	}
}
int main(){
	fast
		cin >> n >> r1 >> r2;
	v.resize(n+1);
	for (int i = 1; i <= n; i++){
		int x;
		if (i == r1)continue;
		cin >> x;
		v[x].push_back(i);
		v[i].push_back(x);
	}
	dfs(r2);
	for (int i = 1; i <= n; i++){
		if (i == r2)continue;
		cout << ans[i] << " ";
	}
	stop();
	return 0;
}