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
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++){
		if (isupper(a[i]))a[i] += 32;
		if (isupper(b[i]))b[i] += 32;
		if (a[i] == b[i])continue;
		if (a[i]>b[i])return cout << 1, 0;
		else return cout << -1, 0;
	}
	cout << 0;
	stop();
	return 0;
}