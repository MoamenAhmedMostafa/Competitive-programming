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
int main() {
	fast
		int n, l, r, x;
	while (cin >> n >> l >> r >> x){
		int arr[20];
		for (int i = 0; i < n; i++)cin >> arr[i];
		int way = 0;
		for (int i = 0; i < (1 << n); i++){
			set<int> vis;
			int cur = 0;
			int total = 0, mx = 0,mn=1e6;
			for (int j = 0; j < n; j++){
				if (i&(1 << j)){
					total += arr[j];
					mx = max(mx, arr[j]);
					mn = min(arr[j], mn);
					cur++;
				}
			}
			if (total <= r&&total >= l&&cur>=2&&mx-mn>=x)way++;

		}
		cout << way << endl;
	}
	stop();
	return 0;
}