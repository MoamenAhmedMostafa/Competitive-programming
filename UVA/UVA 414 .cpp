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

int sum;
int main() {
	fast
		int n;
	while (cin >> n){
		if (!n)break;
		cin.ignore();
		int  mn = 1000,ans=0;
		for (int i = 0; i < n; i++){
			string s;
			getline(cin, s);
			int cnt = 0;
			for (int j = 0; j < s.size(); j++){
				if (s[j] != 'X')cnt++;
			}
			mn = min(mn, cnt);
			ans += cnt;
		}
		cout << ans - mn*n << endl;
	}
	stop();
	return 0;
}