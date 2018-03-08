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

int sum;
int main() {
	fast
		string s;
	while (getline(cin, s)){
		int cnt = 0;
		bool b = 0;
		for (int i = 0; i < s.size(); i++){
			if (isalpha(s[i])){
				b = 1;
			}
			else if (b){
				cnt++;
				b = 0;
			}
		}
		if (b)cnt++;
		cout << cnt << endl;
	}
	stop();
	return 0;
}