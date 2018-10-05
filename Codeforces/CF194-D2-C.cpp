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
int n, m;
char g[51][51];
bool vis[60][60];
int ans;
void dfs(int x, int y){
	vis[x][y] = 1;
	for (int k = 0; k < 4; k++){
		int i = 0, j = 0;;
		i=x + dx[k], j = y + dy[k];
		if (i < n&&i >= 0 && j < m&&j >= 0 && vis[i][j]^1  && g[i][j] != '.')dfs(i, j);
	}
}
int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> g[i][j];
			ans += g[i][j] == '#';
		}
	}
	if (ans < 3)return cout << -1, 0;
	ans = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			clr(vis, 0);
			if (g[i][j]=='#'){
				g[i][j] = '.';
				for (int k = 0; k < n; k++){
					for (int kk = 0; kk < m; kk++){
						if (g[k][kk] == '#'&&vis[k][kk]^1){
							ans++;
							dfs(k, kk);
						}
					}
				}
				g[i][j] = '#';
				if (ans>1)return  cout << 1,0;
				ans = 0;
			}
		}
	}
	cout << 2;
	stop();
	return 0;
}