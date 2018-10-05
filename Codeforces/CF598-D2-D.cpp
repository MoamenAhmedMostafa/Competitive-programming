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
#define endl '\n'
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif
}
const double PI = acos(-1.0);
int n, m;
vector<vector<char> >v;
vector<vector<int> >vis;
vector<vector<int> >dp;
bool valid(int i,int j){
	if (i >= n || i < 0 || j >= m || j < 0)return 0;
	return 1;
}
int solve(int i,int j){
	if (!valid(i, j)||vis[i][j])return 0;
	if (v[i][j] == '*')return 1;
	vis[i][j] = 1;
	int &ret = dp[i][j];
	for (int k = 0; k < 4; k++){
		ret += solve(i + dx[k], j + dy[k]);
	}
	return ret;
}
void dfs(int x, int y,int t){
	if (!valid(x, y)||vis[x][y]==2||v[x][y]=='*')return;
	dp[x][y] = t;
    vis[x][y] = 2;
	for (int k = 0; k < 4; k++){
		dfs(x + dx[k], y + dy[k],t);
	}
}
int main(){
	fast
		int k;
		cin >> n >> m >> k;
	dp = vector<vector<int> >(n, vector<int>(m,0));
	vis = vector<vector<int> >(n, vector<int>(m,0));
	v = vector<vector<char> >(n, vector<char>(m));
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (!vis[i][j])dfs(i, j, solve(i, j));
		}
	}
	while (k--){
		int x, y;
		cin >> x >> y;
		cout << dp[x-1][y-1] << endl;
	}
	return 0;
}