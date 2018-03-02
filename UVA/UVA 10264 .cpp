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
	fast;
	int n;
	while (cin >> n){
		int arr[100001] = { 0 };
		for (int i = 0; i < (1 << n); i++){
			int x;
			cin >> x;
			for (int j = 0; j < (1 << n); j++){
				int a = i^j;
				if ((a&(-a)) == a&&i != j){
					arr[j] += x;

				}
			}
		}
		int ans = 0;
		for (int i = 0; i < (1 << n); i++){
			for (int j = 0; j < (1 << n); j++){
				int a = i^j;
				if ((a&(-a)) == a&&i != j){
					ans = max(ans, arr[i] + arr[j]);

				}
			}
		}
		cout << ans << endl;

	}
	stop();
	return 0;
}