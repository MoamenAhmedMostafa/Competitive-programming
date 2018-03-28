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
ll dp[50][50];
int n;
int arr[50];
int mx(int i, int last){
	if (i == n)return 0;
	if (dp[i][last] != -1)return dp[i][last];
	int c1 = mx(i + 1, last);
	int c2 = 0;
	if (arr[last] < arr[i]){
		c2 = mx(i + 1, i) + 1;
	}
	return dp[i][last] = max(c1, c2);
}
int main(){
	fast
		clr(dp, -1);
	cin >> n;
	for (int i = 0; i < n; i++)cin >> arr[i];
	cout << mx(0, n);
	stop();
	return 0;
}