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
ll n, k;
bool valid(ll x){
	ll a = 1;
	ll ans = 0;
	while (x / a){
		ans += x / a;
		a *= k;
	}
	return (ans >= n);
}
int main() {
	fast
		
	cin >> n >> k;
	ll l = 1, r = 1e9;
	ll ans=0;
	while (l <= r){
		ll md = (r + l) / 2;
		if (valid(md)){
			ans = md;
			r = md - 1;
		}
		else l = md + 1;

	}
	cout << ans << endl;
	stop();
	return 0;
}