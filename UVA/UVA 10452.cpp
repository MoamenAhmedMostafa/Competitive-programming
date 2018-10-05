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
int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
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
int si, sj;
int n, m;
string s = "IEHOVA#";
char g[10][10];
bool vis[10][10];
stack<string>ans, path;
bool FindPath(int i, int j,int k){
	bool ret = 0;
	if (k == 7){
		ans = path;
		return 1;
	}
	vis[i][j] = 1;
	for (int di = 0; di < 3; di++){
		int x = i + dx[di], y = j + dy[di];
		if (x >= n || x<0 || y >= m || y<0 || vis[x][y] || g[x][y] != s[k])continue;
			if (di == 2)path.push("forth");
			if (di == 1)path.push("left");
			if (di == 0)path.push("right");
			ret|=FindPath(x, y, k + 1);
			vis[x][y] = 0;
			if(path.size())path.pop();
	}
	return ret;
}
int main(){
	fast
		int t;
	cin >> t;
	while (t--){
		
		cin >> n >> m;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> g[i][j];
				if (g[i][j] == '@')si = i, sj = j;
			}
		}
		FindPath(si, sj, 0);
		string xx = "";
		while (ans.size()){
			if (ans.top() == "#");
			else xx = ans.top() +" "+ xx;
			ans.pop();
		}
		xx.erase(xx.size() - 1, 1);
		cout << xx << endl;
		clr(vis, 0);
	}
	stop();
	return 0;
}