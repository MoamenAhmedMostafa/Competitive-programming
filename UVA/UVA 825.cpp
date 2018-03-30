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
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int n, m;
bool vis[1001][1001];
ll dp[1001][1001];
ll solve(int i, int j){
	if (i > n || j > m || vis[i][j])return 0;
	if (i == n - 1 && j == m - 1)return 1;
	ll &ret = dp[i][j];
	if (ret != -1)return ret;
	ret = 0;
	ret += solve(i, j + 1);
	ret += solve(i + 1, j);
	return ret;
}
int main(){
	fast
		int t;
	cin >> t;
	while (t--){
		clr(vis, 0);
		clr(dp, -1);
		cin >> n >> m;
		getchar();
		cin.ignore();
		int x;
		for (int i = 0; i < n; i++){
			string s;
			getline(cin, s);
			stringstream ss(s);
			int y = -1;
			while (ss >> x){
				if (y == -1)y = x;
				else vis[y - 1][x - 1] = 1;
			}
		}
		cout << solve(0, 0) << endl;
		if (t)cout << endl;
	}
	stop();
	return 0;
}