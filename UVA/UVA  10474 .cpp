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
pair<int, int>arr[100001];
int bs(int x,int n){
	int l=0, r = n - 1;
	int ans = -1;
	while (l <= r){
		int md = (l + r) / 2;
		if (arr[md].first > x){
			r = md - 1;
		}
		else if (arr[md].first < x)l = md + 1;
		else {
			ans = md+1;
			r = md - 1;
		}
	}
	return ans;
}
int main() {
	fast
		int n, q;
	int T = 0;
	while (cin >> n >> q){
		T++;
		if (!n&&!q)break;
		for (int i = 0; i < n; i++){
			cin >> arr[i].first;
			arr[i].second = i +1;
		}
		sort(arr, arr + n);
		cout << "CASE# " << T << ":" << endl;
		while (q--){
			int m;
			cin >> m;
			int x = bs(m,n);
			if (x == -1)cout<<m<<" not found"<<endl;
			else cout << m << " found at " << x << endl;
		}
	}
	stop();
	return 0;
}