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
int n;
ll sum = 0;
bool arr[32],used[17];
vector<int>a, b, ans;
void solve(int j,int last){
	if (j == n){
		if (!arr[ans[0] + ans[ans.size() - 1]])return;
		for (int i = 0; i < ans.size(); i++){
			if (i+1 != ans.size())cout << ans[i] << " ";
			else cout << ans[i] << endl;
		}
		return;
	}
	if (j & 1){
		for (int i = 0; i < a.size(); i++){
			if (arr[a[i] + last] && !used[a[i]]){
				ans.pb(a[i]);
				used[a[i]] = 1;
				solve(j + 1, a[i]);
				ans.pop_back();
				used[a[i]] = 0;
			}
		}
	}
	else {
		for (int i = 0; i < b.size(); i++){
			if (arr[b[i] + last] && !used[b[i]]){
				ans.pb(b[i]);
				used[b[i]] = 1;
				solve(j + 1, b[i]);
				ans.pop_back();
				used[b[i]] = 0;
			}
		}
	}
}
int main(){
	fast
	arr[2] = arr[3] = arr[5] = arr[7] = arr[11] = arr[13] = arr[17] = arr[19] = arr[23] = arr[29] = arr[31] = 1;
	int T = 1;
	while (cin >> n){
		if (T != 1)cout << endl;
		cout << "Case "<<T++<<":" << endl;
		for (int i = 2; i <= n; i++){
			if (i & 1)b.pb(i);
			else a.pb(i);
		}
		ans.pb(1);
		solve(1,1);
		ans.clear(); a.clear(); b.clear();
	}
	stop();
	return 0;
}