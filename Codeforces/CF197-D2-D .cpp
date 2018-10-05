#define _CRT_SECURE_NO_WARNINGS
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
int dx[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
const int N = 500001;
#define endl '\n'
#define X first
#define Y second
const ll inf = 2e18;
#define pii pair<int,int>
#define pll pair<ll,ll>
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
ll fixMod(ll a, ll b){ return ((a%b) + b) % b; }
bool vis[1505][1505];
char g[1505][1505];
pair<int,int>par[1500][1500];
int n, m;
bool dfs(int i, int j){
	int x = fixMod(i, n), y = fixMod(j, m);
	if (g[x][y] == '#')return 0;
	if (vis[x][y]){
		pair<int, int>tem = { i, j };
		if (par[x][y] != tem)return 1;
		else return 0;
	}
	bool ans = 0;
	par[x][y] = { i, j };
	vis[x][y] = 1;
	for (int k = 0; k < 4; k++){
		ans |= dfs(i + dx[k], j + dy[k]);
	}
	return ans;
}
int main(){
	fast
		cin >> n >> m;
	int s = 0, e = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> g[i][j];
			if (g[i][j] == 'S')s = i, e = j;
		}
	}
	if (dfs(s, e))cout << "Yes";
	else cout << "No";
	stop();
	return 0;
}