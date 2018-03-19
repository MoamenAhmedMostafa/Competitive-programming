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
int main() {
	fast
		int t;
	cin >> t;
	for (int tt = 1; tt <= t; tt++){
		int ans = 0;
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ok = 0, no = 0;
		int sum = 0;
		for(int i=0;i<s.size();i++){
			if (i+2<s.size()&&s[i] == '.'&&s[i+2]=='.')ans++,i+=2;
			else if (s[i] == '#');
			else if (i+1<s.size()&&s[i] == s[i + 1] && s[i] == '.')ans++, i++;
			else ans++;
			
		}
		cout << "Case " << tt << ": " << ans+(ok>0) << endl;
	}
	stop();
	return 0;
}