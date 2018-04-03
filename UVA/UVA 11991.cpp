#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-8;
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
vector<vector<int> >v(1000001);
int main(){
	fast
		int n, q;
	while (cin >> n >> q){
		for (int i = 0; i < n; i++){
			int a;
			cin >> a;
			v[a].push_back(i + 1);
		}
		while (q--){
			int a, b;
			cin >> a >> b;
			if (v[b].size() < a)cout << 0 << endl;
			else {
				cout << v[b][a - 1] << endl;
			}
		}
		v.clear();
	}
	stop();
	return 0;
}