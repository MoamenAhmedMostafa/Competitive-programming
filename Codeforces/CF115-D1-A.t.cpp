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
int main(){
	fast
		int n;
	cin >> n;
	vector<vector<int> >v(n + 1);
	for (int i = 1; i <= n; i++){
		int x;
		cin >> x;
		if (x != -1){
			v[x].push_back(i);
		}
	}
	vector<int>len(n + 1, 1e7);
	bool vis[100001] = { 0 };
	for (int k = 1; k <= n; k++){
		{
			if (!vis[k] && v[k].size()){
				queue<int>q;
				int s = k;
				len[s] = 0;
				vis[s] = 1;
				int d = 0, cr = s, sz = 1;
				q.push(s);
				for (; !q.empty(); d++, sz = q.size()){
					while (sz--){
						cr = q.front(); q.pop();
						for (int j = 0; j < v[cr].size(); j++){
							int node = v[cr][j];
							q.push(node);
							len[node] = d + 1;
							vis[node] = 1;

						}
					}
				}
			}
		}
	}
	int mx = 0, c = 0;
	for (int i = 1; i <= n; i++)
	if (len[i] == 1e7)continue;
	else mx = max(len[i], mx);
	cout << mx + 1 << endl;
	stop();
	return 0;
}