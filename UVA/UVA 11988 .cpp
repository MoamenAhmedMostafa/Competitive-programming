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
	string s;
	while (getline(cin, s)){
		bool home = 0, end = 1;
		string x = "",a="";
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '['){
				if (a != "")x = a + x;
				a = "";
				home = 1, end = 0; continue;
			}
			if (s[i] == ']'){
				if (a != "")x = a + x;
				a = "";
				home = 0, end = 1; continue;
			}
			if (end)x += s[i];
			else a += s[i];
		}
		if (a != "")x = a + x;
		a = "";
		cout << x << endl;
	}
	
	stop();
	return 0;
}