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
int arr[100001], n, k;
bool valid(ll md){
	ll x = 0, ans = 0;
	for (int i = 0; i<n; i++){
		if (arr[i]>md)return 0;
		if (x + arr[i]>md){
			ans++;
			x = 0;
		}
		x += arr[i];
	}
	if (x){
		ans++;
	}
	return (ans <= k);
}
const double PI = acos(-1.0);
int main(){
	fast
	while (cin >> n >> k){
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		ll ans = 1e18;
		ll l = 0, h = 1e18;
		while (l <= h){
			ll md = (l + h) / 2;
			if (valid(md)){
				ans = min(ans, md);
				h = md - 1;
			}
			else l = md + 1;
		}
		cout << ans<<endl;
	}
	stop();
	return 0;
}