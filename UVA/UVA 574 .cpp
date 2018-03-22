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
int arr[5000], n, d;
int main() {
	fast
	while (cin >> d >> n){
		int x = 0, mx = 0;
		if (!d&&!n)break;
		int ans[5000];
		int e = 0;
		for (int i = 0; i < n; i++)cin >> arr[i];
		for (int i = 0; i < (1 << n); i++){
			int sum = 0;
			for (int j = 0; j < n; j++){
				if (i&(1 << j))sum += arr[j];
			}
			if (sum == d){
				ans[e++] = i;
			}
		}
		cout << "Sums of " << d << ":" << endl;
		map<string, bool>mp;
		if (e == 0){
			cout << "NONE" << endl; continue;
		}
		for (int j = 0; j < e; j++){
			x = 0;
			string m = "";
			for (int i = 0; i < n; i++){
				if (ans[j] & (1 << i)){
					stringstream ss;
					string s;
					ss << arr[i];
					ss >> s;
					if (x == 0)m += s;
					else  m = m + "+" + s;
					x = 1;
				}
			}
			mp[m] = 1;
		}
		auto i = mp.end();
		i--;
		while (i != mp.begin()){
			cout << i->first << endl; i--;
		}
		cout << i->first << endl;
	}
	stop();
	return 0;
}