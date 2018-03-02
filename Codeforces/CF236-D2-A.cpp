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
	set<string>st;
	while (cin >> s){
		string x = "";
		for (int i = 0; i < s.size(); i++){
			if (isalpha(s[i])){
				if (isupper(s[i]))s[i] += 32;
				x += s[i];
			}
			else {
			    if(x!="")
				st.insert(x);
				x = "";
			}
		}
		if (x != "")st.insert(x);
	}
	for (auto i : st)cout << i << endl;
	stop();
	return 0;
}