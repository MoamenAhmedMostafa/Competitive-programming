#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define endl '\n'
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
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int k;
ll arr[1000002];
int main() {
	fast
		int t;
	cin >> t;
	int T = 0;
	while (t--){
		T++;
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 3;
		int n,m;
		cin >> n>>m>>k;
		for (int i = 4; i <= n; i++)arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % m + 1;
		int ans = 1e9;
		int l = 1, r = 1;
		int c = 0;
		map<int, int>mp;
		while (l <= n){
			while (r<n&&c!=k){
				mp[arr[r]]++;
				if (mp[arr[r]] == 1 && arr[r] <= k)c++;
				r++;
			}
			if (c == k)ans = min(r - l, ans);
			mp[arr[l]]--;
			if (mp[arr[l]] == 0&&arr[l]<=k)c--;
				l++;
		}
		if (ans == 1e9)cout << "Case " << T << ": sequence nai" << endl;
		else cout <<"Case "<<T<<": "<<ans << endl;
	}
	stop();
	return 0;
}