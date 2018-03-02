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
	int t;
	cin >> t;
	while (t--){
		string a;
		cin >> a;
		if (a.size() > 3)cout << 3 << endl;
		else {
			if (a[0] == 't'&&a[1] == 'w' || a[0] == 't'&&a[2] == 'o' || a[1] == 'w'&&a[2] == 'o' )cout << 2 << endl;
			else cout << 1 << endl;
		}
	}
	stop();
	return 0;
}