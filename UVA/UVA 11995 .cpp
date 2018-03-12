#define _CRT_SECURE_NO_WARNINGS
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
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int main() {
	fast;
	int n;
	//run();
	while (cin >> n){
		bool st = 1, qe = 1, prq = 1;
		stack<int>s;
		priority_queue<int>p;
		queue<int>q;
		while (n--){
			int x, y;
			cin >> x >> y;
			if (x == 1){
				s.push(y);
				p.push(y);
				q.push(y);
			}
			else {
				if (q.size() == 0) { qe = 0; st = 0; prq = 0;  continue; }
				if (q.size() && q.front() != y)qe = 0;
				if (s.size() && s.top() != y)st = 0;
				if (p.size() && p.top() != y)prq = 0;
				q.pop();s.pop(); p.pop();
			}
		}
		if (!qe&&!st&&!prq)cout << "impossible\n";
		else if (qe&&!st&&!prq)cout << "queue\n";
		else if (!qe&&st&&!prq)cout << "stack\n";
		else if (!qe&&!st&&prq)cout << "priority queue\n";
		else cout << "not sure\n";
	}
	stop();
	return 0;
}