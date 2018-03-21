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
ll ans;
void mer(int arr[], int s, int e, int md){
	int l[20001], r[20001];
	for (int i = s; i <= md; i++)l[i] = arr[i];
	for (int i = md + 1; i <= e; i++)r[i] = arr[i];


	int x = s, m = md + 1;
	for (int i = s; i <= e; i++){
		if (x > md)arr[i] = r[m++];
		else if (m > e)arr[i] = l[x++];
		else {
			if (l[x] > r[m])arr[i] = l[x++];
			else arr[i] = r[m++], ans += m - i - 1;
		}
	}
}
void merge(int arr[], int s, int e){
	if (s < e){
		int md = (s + e) / 2;
		merge(arr, s, md);
		merge(arr, md + 1, e);
		mer(arr, s, e, md);
	}
	else return;
}
int arr[20001];
int main() {
	fast
		int n;
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i < n; i++)cin >> arr[i];
		merge(arr, 0, n - 1);
		cout << ans << endl;
		ans = 0;
	}
	stop();
	return 0;
}