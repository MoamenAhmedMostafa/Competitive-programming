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
	fast
		int n, h, w;
	while (cin >> h >> w >> n){
		if (!n && !h && !w)break;
		bool vis[501][501];
		clr(vis, 0);
		int ans = 0;
		while (n--){
			int x1, x2, y1, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			for (int i = min(x1,x2); i <= max(x1,x2); i++){
				for (int j = min(y1, y2); j <= max(y1, y2); j++){
					if (!vis[i][j])ans++, vis[i][j] = 1;
				}
			}
		}
		/*for (int i = 1; i <= h; i++){
			for (int j = 1; j <= w; j++)
				cout << vis[i][j] << " ";
			cout << endl;
		}*/
		//cout << ans << " ";
		ans = h*w - ans;
		if (ans == 0)
			cout << "There is no empty spots." << endl;
		else if (ans == 1)
			cout << "There is one empty spot." << endl;
		else
			cout << "There are " << ans << " empty spots." << endl;
	}
	stop();
	return 0;
}