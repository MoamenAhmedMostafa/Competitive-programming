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
vector<set<int> >vec(100001);
int arr[100001];
bool vis[100001];
int n;
int main(){
	fast
		int n;
	int k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i], vis[arr[i]] = 1;
	for (int i = 0; i < k; i++){
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		if (arr[a] != arr[b]){
			vec[arr[a]].insert(arr[b]);
			vec[arr[b]].insert(arr[a]);
		}
	}

	int mx = 0;
	for (int i = 1; i <=1e5; i++){
		if (vec[i].size() > mx){
			mx = vec[i].size();
		}
	}
	for (int i = 1; i <= 1e5; i++){
		if (vis[i]&&mx==vec[i].size())
		return cout <<i << endl,0;
	}
	stop();
	return 0;
}