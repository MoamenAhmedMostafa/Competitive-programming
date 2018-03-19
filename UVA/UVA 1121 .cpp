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
	int s;
	while (cin >> n >> s){
		int arr[100001];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int l = 0, r = 0;
		int ans = 1e9;
		ll sum = 0;
		while (l <= r&&l < n){
			while (r < n&&sum< s){
				sum += arr[r];
				r++;
			}
			if (sum >= s)ans = min(ans, r - l);
			sum -= arr[l];
			l++;
		}
		if (ans == 1e9)cout << 0 << endl;
		else cout << ans << endl;
	}
	stop();
	return 0;
}