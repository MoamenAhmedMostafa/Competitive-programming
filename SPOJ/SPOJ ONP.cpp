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
int arr[101][101];
int a[102], b[102];
int main() {
	fast;
	int t;
	cin >> t;
	while (t--){
		stack<char>st;
		string s;
		cin >> s;
		for (int i=0; i < s.size(); i++){
			if (isalpha(s[i]))cout << s[i];
			else if (s[i] == ')')cout << st.top(), st.pop();
			else if (s[i] != '(')st.push(s[i]);
		}
		cout << endl;
	}
	stop();
	return 0;
}