#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
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
int n, s, arr[50];
bool vis[21][21000], b;
void solve(int i ,int sum){
	if (sum == s){
		b = 1;
		return;
	}
	if (i == n)
		return ;
	bool &ret = vis[i][sum];
	if (ret)return ;
	else{
		vis[i][sum] = 1;
		//cout << sum << endl;
		solve(i + 1, sum);
		solve(i + 1, sum + arr[i]);
	}
}
int main() {
	fast;
	int t;
	cin >> t;
	while (t--){
		cin >> n >> s;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		solve(0, 0);
		if (b)cout << "Yes" << endl;
		else cout << "No" << endl;
		b = 0;
		clr(vis, 0);
	}
	stop();
	return 0;
}