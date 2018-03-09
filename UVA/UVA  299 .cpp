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
ll n, s;
ll arr[100001];
int main() {
	fast
		int q;
	cin >> q;
	while (q--){
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)cin >> arr[i];
		int ans = 0;
		for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		if (arr[i] > arr[j])
			ans++;
		cout << "Optimal train swapping takes "<<ans<<" swaps." << "\n";
	}
	stop();
	return 0;
}