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
ll dis(pair<int, int> a, pair<int, int> b) {
	ll x = a.first - b.first, y = a.second - b.second;
	return x * x + y * y;
}
int g[201][201];
bool vis[201][201];
int n,x;
int c = 0;
void dfs(int i, int j){
	vis[i][j] = 1;
	for (int k = 0; k < 4; k++){
		int x = i + dx[k], y = j + dy[k];
		if (x > 0 && x <= n  && y > 0 && y <= n&&!vis[x][y]&&g[x][y]==g[i][j]){
			c++;
			dfs(x, y);
		}
	}
}
int main(){
	fast
	while (cin >> n&&n){
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				g[i][j] = n;
			 cin.ignore();

		for (int i = 1; i < n; i++){
			string s;
			getline(cin, s);
			stringstream ss(s);
				int x, y;
				while(ss >> x >> y)
				   g[x][y] = i;
		}
		bool ok = 1;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (!vis[i][j]){
					c = 0;
					dfs(i, j);
					if (c != n-1){
						ok = 0;
						break;
					}
				}
			}
			if (!ok)break;
		}
		if (ok)cout << "good" << endl;
		else cout << "wrong" << endl;
		 clr(vis, 0);
	}
	stop();
	return 0;
}