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
ll one[100001], two[100001];
int main() {
	fast
		int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> one[i];
		two[i] = one[i];
		one[i] += one[i - 1];
	}
	sort(two + 1, two + n + 1);
	for (int i = 1; i <= n; i++){
		two[i] += two[i - 1];
	}
	int q;
	cin >> q;
	while (q--){
		int l, r, t;
		cin >> t >> l >> r;
		if (t == 1){
			cout << one[r] - one[l - 1] << endl;
		}
		else {
			cout << two[r] - two[l - 1] << endl;

		}
	}
	stop();
	return 0;
}