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
char g[1505][1505];
int n, m;
bool vis[1000][1000];
vector<pair<char, pair<int, int> > >ans;
void dfs(int x, int y, int c){
	vis[x][y] = 1;
	ans.push_back({ 'B', { x + 1, y + 1 } });
	for (int i = 0; i < 4; i++){
		int xx = x + dx[i], yy = y + dy[i];
		if (xx < n&&xx >= 0 && yy < m&&yy >= 0 && vis[xx][yy] ^ 1 && g[xx][yy] == '.'){
			dfs(xx, yy, 1);
		}
	}
	if (c){
		ans.push_back({ 'D', { x + 1, y + 1 } });
		ans.push_back({ 'R', { x + 1, y + 1 } });
	}
}
int main(){
	fast
		cin >> n >> m;
	int s = 0, e = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> g[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (!vis[i][j]&&g[i][j]!='#'){
				dfs(i, j, 0);
			}
		}
	}
	cout << ans.size() << endl;
	for (auto i : ans)cout << i.first << " " << i.second.first << " " << i.second.second << endl;
	stop();
	return 0;
}