#define _CRT_SECURE_NO_WARNINGS
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
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int main() {
	fast
		int t;
	cin >> t;
	while (t--){
		ll a, b, c;
		cin >> a >> b >> c;
		bool flag = 0;
		for (int x = -100; x <= 100; x++)
		{
			for (int y = x + 1; y <=100; y++)
			{
				for (int z = y + 1; z <=100; z++)
				{
					if (x + y + z == a&&x*y*z == b&&x*x + y*y + z*z == c) { cout << x << " " << y << " " << z << endl; flag = 1; break; }
				}
				if (flag)break;
			}
			if (flag)break;
		}

		if(!flag) cout << "No solution.\n";
	}
	stop();
	return 0;
}