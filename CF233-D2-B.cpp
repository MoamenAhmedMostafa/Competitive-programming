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
ll n;
bool okay(ll x){
	ll sum = 0, m = x;
	while (m)sum += m % 10, m /= 10;
	return(n%x==0&&(x + sum) == n/x);
}
int main() {
	fast
		cin >> n;
	ll m = sqrt(n);
	ll ans = -1;
	for (ll md = max(1LL,m-1000); md <= sqrt(n);md++){
		if (okay(md)){
			return cout << md << endl,0;
		}
	}
	cout << ans << endl;
	stop();
	return 0;
}