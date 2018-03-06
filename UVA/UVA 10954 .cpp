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
	fast
		int n;
	while (cin >> n ){
		if (!n)break;
		multiset<int>st;
		for (int i = 0; i < n; i++){
			int x;
			cin >> x;
			st.insert(x);
		}
		int ans = 0;
		while (st.size() != 1){
			auto a = st.begin(), b = ++a;
			a--;
			int v = *a;
			v += *b;
			ans += v;
			//cout << *a << " " << *b << endl;
			st.erase(a);
			st.erase(b);
			st.insert(v);
		}
		cout<<ans<<endl;
	}
	stop();
	return 0;
}