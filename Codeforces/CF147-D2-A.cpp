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
vector<vector<int> >v; 
int arr[100001];
int main() {
	fast
		int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int x;
		int ans = 0;
		for (int j = 0; j < n; j++){
			cin >> x;
			ans = max(ans, x);
		}
		while (arr[ans])ans++;
		arr[ans] = 1;
		cout << ans << " ";
	}
	stop();
	return 0;
}
