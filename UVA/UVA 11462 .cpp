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
	while (cin >> n&&n){
		map<int, int>mp;
		for (int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		int x = 0;
		for (int i = 0; i <= 100; i++){
			for (int j = 0; j < mp[i]; j++){
				x++;
				if(x!=n)cout << i << " ";
				else cout << i << endl;
			}
		}
	}
	stop();
	return 0;
}