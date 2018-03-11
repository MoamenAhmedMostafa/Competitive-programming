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
		string a, b;
		set<string>add, del, ch;
		cin >> a >> b;
		int n = a.size();
		map<string, string>mp1, mp2;
		string x = "", y = "";
		for (int i = 0; i < n; i++){
			if (isalpha(a[i]))x += a[i];
			else if (isdigit(a[i]))y += a[i];
			else {
				if (x != ""&&y != ""){
					mp1[x] = y;
					x = y = "";
				}
			}
		}
		if (x != ""&&y != ""){
			mp1[x] = y;
			x = y = "";
		}
		n = b.size();
		for (int i = 0; i < n; i++){
			if (isalpha(b[i]))x += b[i];
			else if (isdigit(b[i]))y += b[i];
			else {
				if (x != ""&&y != ""){
					mp2[x] = y;
					x = y = "";
				}
			}
		}
		if (x != ""&&y != ""){
			mp2[x] = y;
			x = y = "";
		}

		for (auto i : mp1){
			string a, b;
			a = i.first;
			b = i.second;
			if (mp2[a] == ""){
				del.insert(a);
			}
			else if (mp2[a] != b){
				ch.insert(a);
			}
		}
		for (auto i : mp2){
			string a, b;
			a = i.first;
			b = i.second;
			if (mp1[a] == "")add.insert(a);
		}

		bool f = 1;
		if (add.size()){
			cout << "+";
			f = 0;
			int m = 1;
			for (auto i : add){
				if (m == add.size())cout << i << endl;
				else cout << i << ",";
				m++;
			}
		}

		if (del.size()){
			cout << "-";
			f = 0;
			int m = 1;
			for (auto i : del){
				if (m == del.size())cout << i << endl;
				else cout << i << ",";
				m++;
			}
		}

		if (ch.size()){
			cout << "*";
			f = 0;
			int m = 1;
			for (auto i : ch){
				if (m == ch.size())cout << i << endl;
				else cout << i << ",";
				m++;
			}
		}
		if (f)cout << "No changes" << endl;
		cout << endl;
	}
	stop();
	return 0;
}