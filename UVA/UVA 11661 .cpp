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
	fast;
	int n;
	while (cin >> n){
		if (!n)break;
		int d = 0, r = 0, z = 0;
		int ans = 1e9;
		for (int i = 1; i <= n; i++){
			char ch;
			cin >> ch;
			if (ch == 'D')d = i;
			else if (ch == 'R')r = i;
			else if (ch == 'Z')ans = 0;
			if (r&&d)ans = min(ans, abs(r - d) );
		}
		cout << ans << endl;
	}
	stop();
	return 0;
}