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
vector<vector<int> >v(26);
bool vis[26];
int ans = 0;
void dfs(int node){
	vis[node] = 1;
	for (int i = 0; i < v[node].size(); i++){
		if (!vis[v[node][i]]){
			ans++;
			dfs(v[node][i]);
		}

	}
}
int main(){
	fast
		int n;
	cin >> n;
	while (n--){
		string s;
		while (cin >> s&&s[0] != '*'){
			v[s[1] - 'A'].push_back(s[3] - 'A');
			v[s[3] - 'A'].push_back(s[1] - 'A');
		}
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if (i%2==0)v[s[i] - 'A'].push_back(s[i] - 'A');
		}
		int a = 0, b = 0;
		for (int i = 0; i < 26; i++){
			if (!vis[i]&&v[i].size()){
				dfs(i);
				if (ans == 0)b++;
				else a++;
				ans = 0;
			}
		}
		cout << "There are " << a << " tree(s) and " << b << " acorn(s)." << endl;
		clr(vis, 0);
		v.clear();
		v.resize(26);
	}
	stop();
	return 0;
}