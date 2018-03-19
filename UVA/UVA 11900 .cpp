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
		int t;
	cin >> t;
	for (int tt = 1; tt <= t; tt++){
		int ans = 0;
		int p, q, n;
		int arr[50];
		cin >> n >> p >> q;
		for (int i = 0; i < n; i++)cin >> arr[i];
		int r = 0, l = 0;
		int sum = 0;
		while (l <= r&&l<n){
			while (r < n && (r - l + 1) <= p&&sum+arr[r] <= q)sum += arr[r++];
			ans = max(ans, r - l);
			sum -= arr[l++];
		}
		cout << "Case " << tt << ": " << ans << endl;
	}
	stop();
	return 0;
}