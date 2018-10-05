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
int n, m;
bool ans = 0;
pair<int, int>arr[50],f,l;
bool vis[50];
void solve(int c, int last){
	if (c == n){
		if (last == l.first){
			ans = 1;
		}
		return;
	}
	for (int i = 0; i < m; i++){
		if (!vis[i] && (arr[i].first == last || arr[i].second == last)){
			vis[i] = 1;
			if ((arr[i].first == last)){
				solve(c + 1, arr[i].second);
			}
			else solve(c + 1, arr[i].first);
			vis[i] = 0;
		}
	}
}
int main(){
	fast
	while (cin>>n && n){
		cin >> m;
		cin >> f.first >> f.second;
		cin >> l.first >> l.second;
		for (int i = 0; i < m; i++){
			cin >> arr[i].first >> arr[i].second;
		}
		solve(0, f.second);
		if (ans)cout << "YES" << endl;
		else cout << "NO" << endl;
		ans = 0;
		clr(vis, 0);
	}
	stop();
	return 0;
}