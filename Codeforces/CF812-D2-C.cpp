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
ll n,s;
ll arr[100001],arr2[100001];
ll ans;
bool valid(ll x){

	ans = 0;
	for (int i = 0; i < n; i++){
		arr2[i] = arr[i] + (x*(i + 1));
	}

	sort(arr2, arr2 + n);

	for (ll i = 0; i < x; i++){
		ans += arr2[i];
	}
	return ans <= s;
}
int main() {
	fast
		cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	ll k,mn=0;
	ll l = 0, r = n;

	while (l <= r){
		ll md = (l + r) / 2;
		if (valid(md)){
			k = md;
		//	cout << k << " " << ans << endl;
			mn = ans;
			l = md + 1;
		}
		else r = md - 1;
	}

	cout << k <<" "<< mn << endl;
	stop();
	return 0;
}