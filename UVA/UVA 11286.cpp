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
int main() {
	fast
		int n;
	while (cin>>n&&n){
		map<vector<int>, int>mp;
		int mx = 0;
		while (n--){
			vector<int>arr(5);
			for (int i = 0; i < 5; i++)cin >> arr[i];
			sort(all(arr));
			mp[arr]++;
			mx = max(mx, mp[arr]);
		}
		int ans = 0;
		for (auto i : mp){
			if (i.second == mx)ans += mx;
		}
		cout << ans << endl;
	}
	stop();
	return 0;
}