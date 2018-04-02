#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
typedef long long ll;
typedef unsigned long long ull;
//const int oo = 2e9;
//const ll k = -9e18;
//const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int vis[500000],p[500000];
int n, m;
ll ans = 0;
vector<vector<int> > v,v2;
void dfs(int lang){
	vis[lang] = 1;
	for (int i = 0; i < v[lang].size(); i++){
		int prs = v[lang][i];
		if (!p[prs]){
			p[prs] = 1;
			for (int j = 0; j < v2[prs].size(); j++){
				if (!vis[v2[prs][j]])
					dfs(v2[prs][j]);
			}
		}
	}
}
int main()
{
	fast
		cin >> n >> m;

	v.resize(m + 1);
	v2.resize(n + 1);
	int ans2 = 0;
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if (!x)ans2++;
		for (int j = 0; j < x; j++){
			int y;
			cin >> y;
			v[y].push_back(i);
			v2[i].push_back(y);
		}
	}

	for (int i = 1; i <= m; i++){
		if (!vis[i]&&!v[i].empty()){
			dfs(i);
			ans++;
		}
	}
	cout << ans2 +max(ans-1,0ll)  << endl;
	//system("pause");
	return 0;
}