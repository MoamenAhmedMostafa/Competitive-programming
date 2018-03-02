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
int arr[1000001];
int main() {
	fast;
	int t;
	cin >> t;
	while (t--){
		int n, s;
		cin >> n >> s;
		for (int i = 0; i < n; i++){
			int h, l;
			cin >> l >> h;
			arr[l]++;
			arr[h+1]--;
		}
		ll ans = 0;
		for (int i = 1; i < n; i++)
			arr[i] += arr[i - 1];
		for (int i = 0; i < s; i++)
			ans += n - arr[i];
		//cout << ans << endl;
		ll mn = ans;
		for (int i = 0; i < n - s; i++)
		{
			ans -= (arr[i + s ] - arr[i]);
			//cout << ans << endl;
			if (ans < mn)mn = ans;
		}
		cout << mn << endl;
		clr(arr, 0);
	}
	stop();
	return 0;
}