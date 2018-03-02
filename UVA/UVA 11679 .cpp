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
	int a, b;
	while (cin >> a >>b){
		if (!a&&!b)break;
		int arr[100];
		for (int i = 0; i < a; i++){
			cin >> arr[i + 1];
		}
		bool f = 1;
		for (int i = 0; i < b; i++){
			int d, c, v;
			cin >> d >> c >> v;
			arr[d] -= v;
			arr[c] += v;
		}
		for (int i = 0; i < a; i++){
			if (arr[i + 1] < 0){
				f = 0;
				break;
		}
		}
		if (f)cout << "S" << endl;
		else cout << "N" << endl;
	}
	stop();
	return 0;
}