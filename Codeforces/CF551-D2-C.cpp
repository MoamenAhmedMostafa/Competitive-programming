#define _CRT_SECURE_NO_WARNINGS
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
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int arr[100001], a[100001], n,m;
bool okay(ll k){
	for (int i = 0; i < n; i++)a[i] = arr[i];
	int pos = n - 1;
	for (int i = 0; i < m; i++){
		while (pos >= 0 && !a[pos])pos--;
		long long time = k - pos - 1;
		while (pos >= 0 && a[pos] <= time)time -= a[pos--];
		if (pos >= 0)a[pos] -= time;
	}
	return (pos < 0);
}
const double PI = acos(-1.0);
int main(){
	fast
		cin >> n >> m;
	for (int i = 0; i < n; i++)cin >> arr[i];
	ll l = 0, h = 1e15,ans;
	while (l <= h){
		ll md = l + h >> 1;
		if (okay(md)){
			ans = md;
			h = md - 1;
		}
		else l = md + 1;
	}
	cout << ans << endl;
	stop();
	return 0;
}