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
int arr[100001];
int main() {
	fast
		int n, a;
	cin >> n >> a;
	for (int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		int other = 2 * a - i;
		if (arr[i])
		if (other<1 || other>n || arr[i] == arr[other])ans++;
	}
	cout << ans << endl;
	stop();
	return 0;
}