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
int n;
int main(){
	fast
		cin >> n;
	while (n--){
		int p;
		cin >> p;
		cin.ignore();
		vector<set<int> >v(p);
		int mn = 1e9;

		for (int i = 0; i < p; i++){
			string s;
			getline(cin, s);
			stringstream ss(s);
			int a;
			while (ss >> a){
				v[i].insert(a);
			}
			mn = min(mn, (int)v[i].size());
		}

		vector<int>ans;
		for (int i = 0; i < p; i++){
			if (v[i].size() == mn)ans.push_back(i);
		}

		for (int i = 0; i< ans.size() - 1; i++)cout << ans[i] + 1 << " ";
		cout << ans[ans.size() - 1] + 1 << endl;
		//if (n)getchar();
	}
	stop();
	return 0;
}