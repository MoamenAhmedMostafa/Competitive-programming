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
ll a[1000001], b[1000001];
ll n, k;
ll ans;
bool okay(int x){
	ll m = 0;
	for (int i = 0; i < n; i++)
	{
		ll y = a[i] * x;
		y -= b[i];
		if (y>0)
			m += y;
		if (m>k)return 0;
	}
	return (m <= k);
}
int main() {
	fast;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	ll l = 0, r = 2e9;
	while (l <= r){
		int md = (l + r) / 2;
		if (okay(md)){
			ans = md;
			l = md +1 ;
		}
		else r = md - 1;
	}
	cout << ans << endl;
	stop();
	return 0;
}
