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
const double PI = acos(-1.0);
set < pair<ll, pair<int, int> > > st;
int main(){
	fast
		string s;
	while (cin >> s&&s != "#"){
		int x, y;
		cin >> x >> y;
		st.insert(make_pair(y, make_pair(x, y)));
	}
	int x;
	cin >> x;
	while (x--){
		pair<ll, pair<int, int> > p = *st.begin();
		st.erase(st.begin());
		cout << p.second.first<< endl;
		p.first += p.second.second;
		st.insert(p);
	}
	stop();
	return 0;
}