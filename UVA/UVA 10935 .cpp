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
		queue<int>q;
		for (int i = 0; i < n; i++)q.push(i + 1);
		cout << "Discarded cards:";
		while (q.size()>1){
			cout << " " << q.front();
			q.pop();
			int x = q.front();
			q.pop();
			if (!q.empty())cout << ",";
			q.push(x);
		}
		cout<<"\nRemaining card: "<<q.front()<<"\n";
		q.pop();

		}
	stop();
	return 0;
}