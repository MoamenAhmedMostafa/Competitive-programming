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
const double PI = acos(-1.0);
int n;
int main(){
	fast
		int t;
	cin >> t;
	for (int tt = 1; tt <= t; tt++){
		int n;
		cin >> n;
		vector<vector<int> >v(n+1);
		for (int j = 0; j < n; j++){
			int a, b;
			cin >> a >> b;
			a--; b--;
			v[a].push_back(b);
		}
		int mx = 0, per = 0;
		bool vis[100001], vis2[100001];
		clr(vis, 0);
		for (int j = 0; j < n; j++){
			if (vis[j])continue;
			queue<int>q;
			int ans = 0; 
			q.push(j);
			clr(vis2, 0);
			while (!q.empty()){
				int pr = q.front();
				q.pop();
				vis[pr] = 1;
				vis2[pr] = 1;
				for (int i = 0; i < v[pr].size(); i++){
					int ch = v[pr][i];
					if (!vis2[ch]){
						q.push(ch);
					}
				}
				ans++;
			}
			if (ans>mx){
				mx = ans;
				per = j;
			}
		}
		cout << "Case "<<tt<<": "<<per+1 << endl;
	}
	stop();
	return 0;
}