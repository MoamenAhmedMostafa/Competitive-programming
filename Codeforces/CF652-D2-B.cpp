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
int n, arr[1001];
int main() {
	fast
		cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	sort(arr, arr + n);
	int r = n - 1, l = 0;
	int cnt = 1;
	while (l <= r){
		if (cnt & 1)cout << arr[l++] << " ";
		else cout << arr[r--] << " ";
		cnt++;
	}
	stop();
	return 0;
}