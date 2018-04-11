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
int arr[8][8];
bool vis[8][8], vc[8], vmd[50], vd[50];
ll solve(int r){
	if (r == 8){
		ll ans = 0;
		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				if (vis[i][j])ans += arr[i][j];
			}
		}
		return ans;
	}
	ll ret = 0;
	for (int i = 0; i < 8; i++){
		if (!vc[i] && !vmd[i - r + 8] && !vd[i + r + 8] && !vis[r][i]){
			vc[i] = vmd[i - r + 8] = vd[i + r + 8] = vis[r][i] = 1;
			ret=max(ret,solve(r + 1));
			vc[i] = vmd[i - r + 8] = vd[i + r + 8] = vis[r][i] = 0;
		}
	}
	return ret;
}
int main(){
	fast
		int t;
	cin >> t;
	while (t--){
		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				cin >> arr[i][j];
			}
		}
		cout <<setw(5)<<solve(0) << endl;
		clr(vd, 0);
		clr(vmd, 0);
		clr(vc, 0);
		clr(vis, 0);
	}
	stop();
	return 0;
}