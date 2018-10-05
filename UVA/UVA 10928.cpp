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
const ll inf = 2e18;
#define pii pair<int,int>
#define pll pair<ll,ll>
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
ll gcd(ll a, ll b){ return !b ? a : gcd(b, a % b); }
ll fixMod(ll a, ll b){ return ((a%b) + b) % b; }
int main(){
	fast
		int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		bool arr[100][100];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		bool ok = 1;
		bool vis[100][100];
		clr(vis, 0);
		for (int j = 0; j < m; j++){
			int c = 0;
			int x = 0;
			for (int i = 0; i < n; i++){
				if (arr[i][j]){
					c++;
					if (c == 2)
					{
						if (vis[i][x]){ ok = 0; goto ret; }
							vis[i][x] = vis[x][i] = 1;
					}
					x = i;
				}
			}
			if (c != 2){ ok = 0; goto ret; }
		}
	ret:
		if (!ok)
		{
			cout << "No" << endl;
			continue;
		}
		cout << "Yes" << endl;
	}
	stop();
	return 0;
}
