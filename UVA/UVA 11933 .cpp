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
	int n;
	while (cin>>n){
		int a=0, b=0;
		int aa = 1, bb = 1;
		int p = 1;
		int c = 0;
		if (!n)break;
		while (n){
			/*111
			101 010
			if (c & 1){
				if (n%2==1)
			}
			else b += bb;
			c++;*/
			if (c){
				if (n % 2)a += p,c=0;
			}
			else {
				if (n % 2)b += p,c=1;
				
			}
			p *= 2;
			n /= 2;
		}
		cout << b << " " << a << endl;
	}
	stop();
	return 0;
}