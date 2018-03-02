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
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		//MARGARITA
			map<char, int>mp;
		for (int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		cout << min(mp['M'], min(mp['A'] / 3, min(mp['G'], min(mp['I'], min(mp['T'], mp['R'] / 2))))) << endl;
	}
	stop();
	return 0;
}
