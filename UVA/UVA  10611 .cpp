#include bitsstdc++.h
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast iossync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
void stop(){
#ifndef ONLINE_JUDGE
	system(pause);
#endif
}
ll n,s;
ll arr[100001];
int bs(int k){
	int l=0, r=n-1;
	int ans = 0;
	while (l = r){
		int md = (l + r)  2;
		if (arr[md]k){
			ans = arr[md];
			l = md + 1;
		}
		else r = md - 1;
	}
	return ans;
}
int main() {
	fast
		cin  n;
	for (int i = 0; i  n; i++)
		cin  arr[i];
	sort(arr, arr + n);
	int q;
	cin  q;
	while (q--){
		int x;
		cin  x;
		int a = upper_bound(arr, arr + n, x);
		int b = bs(x);
		if (a&&b)
		cout  b     a  'n';
		else if (b&&!a){
			cout  b     'X'  'n';
		}
		else if (a){
			cout  'X'     a  'n';
		}
		else cout  'X'     'X'  'n';
	}
	stop();
	return 0;
}