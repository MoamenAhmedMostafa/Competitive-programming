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
	while (cin >> n){
		if (!n)break;
		while (1){
			stack<int>st;
			int arr[1001];
			bool br = 0;
			for (int i = 1; i <= n; i++){
				cin >> arr[i];
				if (!arr[i])br = 1;
				if (br)break;
			}
			int ans = 1;
			if (br){
				cout << endl; break;
			}
			for (int i = 1; i <= n; i++){
				st.push(i);
				while (!st.empty() && st.top() == arr[ans]){
					st.pop();
					ans++;
					if (ans > n)break;
				}
			}
			if (st.empty())cout << "Yes\n";
			else cout << "No\n";
		}
		}
	stop();
	return 0;
}