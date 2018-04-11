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
const double PI = acos(-1.0);
bool vis[10][10], vc[10], vmd[50], vd[50];
vector<vector<pair<int, int>> >v;
int e = 0;
int a, b;
void solve(int r){
	if (r == 8){
		vector<pair<int,int> >vv;
		if (!vis[a - 1][b - 1])return;
		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				if (vis[i][j]){
					vv.push_back({ j + 1, i + 1 });
				}
			}
		}
		sort(all(vv));
		v.push_back(vv);
	}
	for (int i = 0; i < 8; i++){
		if (!vc[i] && !vmd[r-i + 8] && !vd[i + r ] && !vis[r][i]){
			vc[i] = vmd[r - i + 8] = vd[i + r ] = vis[r][i] = 1;
			solve(r + 1);
			vc[i] = vmd[r-i+ 8] = vd[i + r] = vis[r][i] = 0;
		}
	}
}
int main(){
	fast
		int t;
	freopen("out.txt", "w", stdout);
	cin >> t;
	while (t--){
		cin >> a >> b;
		solve(0);
		sort(all(v));
		cout << "SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n";
		for (int i = 0; i < v.size(); i++){
			if (i + 1<10)cout << " " << i + 1 << "      ";
			else cout << i + 1 << "      ";
			for (int j = 0; j <(int)v[i].size()-1; j++){
				cout << v[i][j].second<<" ";
			}
			cout << v[i][(int)v[i].size()-1].second << endl;
		}
		
		clr(vd, 0);
		clr(vmd, 0);
		clr(vc, 0);
		clr(vis, 0);
		v.clear();
		if (t)cout << endl;
	}
	stop();
	return 0;
}