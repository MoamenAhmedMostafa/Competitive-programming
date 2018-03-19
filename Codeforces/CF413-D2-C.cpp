#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define endl '\n'
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
ll arr[101],arr2[100];
int main() {
	fast
		int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)cin >> arr[i];
	for (int i = 0; i < m; i++){
		int x;
		cin >> x;
		arr2[i] = arr[x - 1];
		arr[x - 1] = 1e8;
	}
	sort(arr, arr + n);
	sort(arr2, arr2 + m);
	reverse(arr2, arr2 + m);
	ll sum = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] == 1e8)continue;
		sum += arr[i];
	}
	for (int i = 0; i < m; i++){
		sum += max(sum, arr2[i]);
	}
	cout << sum << endl;
	stop();
	return 0;
}