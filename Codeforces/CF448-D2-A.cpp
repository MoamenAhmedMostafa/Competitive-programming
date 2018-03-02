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
	ll a = 0, b = 0;
	int n;
	for (int i = 0; i < 6; i++){
		int x;
		cin >> x;
		if (i < 3)a += x;
		else b += x;
	}
	cin >> n;
	if ((a + 4) / 5 + (b + 9) / 10 <= n)cout << "YES" << endl;
	else cout << "NO" << endl;
	stop();
	return 0;
}